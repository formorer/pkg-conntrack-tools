#!/bin/sh

CONFIG_FILE=$(mktemp)
if [ ! -w $CONFIG_FILE ] ; then
	echo "E: unable to obtain tempfile" >&2
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

conntrackd -d -C $CONFIG_FILE
sleep 5 # let's be friendly with the daemon startup time
rm -f $CONFIG_FILE
conntrackd -s
conntrackd -k
