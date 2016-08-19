#!/bin/sh

set -ex

LOCKFILE="/var/lock/conntrackd.lock"
CONFIG_FILE=$(mktemp)
if [ ! -w "$CONFIG_FILE" ] ; then
	: ERROR unable to obtain tempfile
	exit 1
fi

lockfile_exists()
{
	if [ -e "$LOCKFILE" ] ; then
		: INFO lockfile $LOCKFILE exists
		return 0
	else
		: INFO lockfile $LOCKFILE does not exists
		return 1
	fi
}

conntrackd_running()
{
	if pgrep [c]onntrackd >/dev/null ; then
		: INFO conntrackd seems running
		return 0
	else
		: INFO conntrackd seems not running
		return 1
	fi
}

if lockfile_exists ; then
	if conntrackd_running ; then
		: INFO killing it now with pkill
		if ! pkill --signal 9 [c]onntrackd ; then
			: ERROR unable to kill conntrackd with pkill
			exit 1
		fi
	fi
	rm -f $LOCKFILE
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
		Interface lo
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
	LockFile $LOCKFILE
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

conntrackd -d -C $CONFIG_FILE
sleep 5 # let's be friendly with the daemon startup time
rm -f $CONFIG_FILE
conntrackd -s
conntrackd -k
sleep 5 # let's be friendly with the daemon shutdown time
if lockfile_exists ; then
	: ERROR lockfile still present after conntrackd -k
	exit 1
fi
if conntrackd_running ; then
	: ERROR conntrackd running after conntrackd -k
	exit 1
fi

: INFO all tests OK
exit 0
