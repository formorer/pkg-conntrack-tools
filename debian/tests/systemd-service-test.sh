#!/bin/sh

SERVICE="conntrackd.service"
WATCHDOG_TIME="5"
ETC_SERVICE_FILE="/etc/systemd/system/${SERVICE}"
LIB_SERVICE_FILE="/lib/systemd/system/${SERVICE}"
CONFIG_FILE="/etc/conntrackd/conntrackd.conf"

if [ ! -r $LIB_SERVICE_FILE ; then
	echo "E: unable to read $LIB_SERVICE_FILE" >&2
	exit 1
fi
if [ ! -w $CONFIG_FILE ] ; then
	echo "E: Unable to write to $CONFIG_FILE" >&2
	exit 1
fi

echo "
Sync {
	Mode NOTRACK {
		DisableInternalCache on
		DisableExternalCache on
	}

	TCP {
		IPv4_address 127.0.0.1
		IPv4_Destination_Address 127.0.0.1
		Port 3780
		Interface eth0
		Checksum on
		SndSocketBuffer 12492800
		RcvSocketBuffer 12492800
	}
	Options {
		ExpectationSync On
	}
}
General {
	Nice -20
	Scheduler {
		Type FIFO
		Priority 99
	}

	Syslog on
	LockFile /var/lock/conntrackd.lock
	UNIX {
		Path /var/run/conntrackd.sock
		Backlog 20
	}

	NetlinkBufferSize 8000000
	NetlinkBufferSizeMaxGrowth 80000000

	Filter {
		Address Ignore {
			IPv4_address 127.0.0.1
			IPv6_address ::1
		}
	}

	EventIterationLimit 10
}" > $CONFIG_FILE

set -e

#
# before start, package installation may start the daemon
#
if systemctl -q is-active $SERVICE ; then
	echo "W: initial service running, stopping now" >&2
	systemctl stop $SERVICE
fi

#
# Enable systemd watchdog, 5 seconds for this test
#
cp $LIB_SERVICE_FILE $ETC_SERVICE_FILE
sed -i s/#WatchdogSec=60/WatchdogSec=${WATCHDOG_TIME}/g $ETC_SERVICE_FILE
systemctl daemon-reload

#
# First run of the daemon and basic checks
#
systemctl start $SERVICE
sleep $((${WATCHDOG_TIME} * 3)) # wait for potential watchdog errors
echo "I: doing now basic checks, 'conntrackd -s' and 'systemctl status $SERVICE':"
conntrackd -s >/dev/null
systemctl status $SERVICE

#
# Check that a manual kill is recognized by systemd
#
conntrackd -k
sleep 5 # be friendly with the daemon shutdown time
if systemctl -q is-active $SERVICE ; then
	echo "E: conntrackd manually killed and systemd didn't recogniced it" >&2
	exit 1
fi

#
# Restart the daemon
#
systemctl restart $SERVICE
sleep $((${WATCHDOG_TIME} * 3)) # wait for potential watchdog errors
if ! systemctl -q is-active $SERVICE ; then
	echo "E: conntrackd was unable to restart, lockfile?" >&2
	systemctl status $SERVICE
	exit 1
fi

#
# Let's hit the wathdog timeout
#
PID=$(systemctl show $SERVICE | grep ^MainPID= | awk -F'=' '{print $2}')
kill -s STOP $PID
sleep $((${WATCHDOG_TIME} * 3)) # wait for potential watchdog errors
if ! journalctl -u $SERVICE | grep "Watchdog timeout" >/dev/null ; then
	echo "E: watchdog timeout not detected" >&2
	exit 1
fi

exit 0
