#!/bin/sh

# Run the internal tests of conntrack

set -e

cd tests/conntrack
sh -e ./run-test.sh
exit $?
