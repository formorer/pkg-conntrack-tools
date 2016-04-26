#!/bin/sh

set -ex

: INFO flushing all information
conntrack -F

ARGS_TIMEOUT="--timeout 100"
ARGS_IP="--src 127.0.0.1 --dst 127.0.0.1"

test_conn() {
	:
	:
	if ! conntrack -I $1 $ARGS_TIMEOUT 2>&1 | grep "1 flow entries have been created" >/dev/null ; then
		: ERROR no conntrack created
		exit 1
	fi
	if [ $(conntrack -L $1 2>&1 | wc -l) -ne 2 ] ; then
		: ERROR no conntrack listed
		exit 1
	fi
	if ! conntrack -D $1 2>&1 | grep "1 flow entries have been deleted" >/dev/null ; then
		: ERROR no conntrack deleted
		exit 1
	fi
	:
	:
}

ARGS_TCP="--proto tcp --sport 1 --dport 2 --state NONE"
test_conn "$ARGS_IP $ARGS_TCP"

ARGS_UDP="--proto udp --sport 1 --dport 2"
test_conn "$ARGS_IP $ARGS_UDP"

ARGS_ICMP="--proto icmp --icmp-type 0 --icmp-code 0"
test_conn "$ARGS_IP $ARGS_ICMP"

: INFO all tests OK
exit 0
