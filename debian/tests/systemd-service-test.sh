#!/bin/sh

set -ex

SERVICE="conntrackd.service"
WATCHDOG_TIME="5"
ETC_SERVICE_FILE="/etc/systemd/system/${SERVICE}"
LIB_SERVICE_FILE="/lib/systemd/system/${SERVICE}"
CONFIG_FILE="/etc/conntrackd/conntrackd.conf"

if [ ! -r "$LIB_SERVICE_FILE" ] ; then
	: ERROR unable to read $LIB_SERVICE_FILE
	exit 1
fi
if [ ! -w "$CONFIG_FILE" ] ; then
	: ERROR unable to write to $CONFIG_FILE
	exit 1
fi

systemctl_action()
{
	if ! systemctl $1 $SERVICE ; then
		journalctl -u $SERVICE
		return 1
	fi
	return 0
}

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
	Systemd on
}" > $CONFIG_FILE

#
# before start, package installation may start the daemon
#
if systemctl -q is-active $SERVICE ; then
	: WARNING initial service running, stopping now
	if ! systemctl_action stop ; then
		: ERROR cant stop initial service
		exit 1
	fi
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
if ! systemctl_action start ; then
	: ERROR cant start the service
	exit 1
fi
sleep $((${WATCHDOG_TIME} * 3)) # wait for potential watchdog errors
conntrackd -s
systemctl status $SERVICE

#
# Check that a manual kill is recognized by systemd
#
conntrackd -k
sleep 5 # be friendly with the daemon shutdown time
if systemctl -q is-active $SERVICE ; then
	: ERROR conntrackd manually killed and systemd did not recognice it
	exit 1
fi

#
# Restart the daemon
#
if ! systemctl_action restart ; then
	: ERROR unable to restart conntrackd
	exit 1
fi
sleep $((${WATCHDOG_TIME} * 3)) # wait for potential watchdog errors
if ! systemctl -q is-active $SERVICE ; then
	journalctl -u $SERVICE
	: ERROR conntrackd not active after restart
	exit 1
fi

#
# Let's hit the wathdog timeout
#
PID=$(systemctl show $SERVICE | grep ^MainPID= | awk -F'=' '{print $2}')
kill -s STOP $PID
sleep $((${WATCHDOG_TIME} * 3)) # wait for potential watchdog errors
if ! journalctl -u $SERVICE | grep "Watchdog timeout" >/dev/null ; then
	: ERROR watchdog timeout not detected
	exit 1
fi

: INFO all tests OK
exit 0
