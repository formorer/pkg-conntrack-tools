#!/bin/sh

# Run the internal tests of conntrack

set -e

# The testsuite requires kernel at least 4.x
if [ "$(uname -r | cut -d. -f1)" -lt 4 ] ; then
	echo "W: this testsuite is likely to produce many fails because of old kernel, ending now"
	exit 0
fi

cd tests/conntrack
bash -e ./run-test.sh
exit $?
