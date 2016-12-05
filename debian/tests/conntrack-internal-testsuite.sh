#!/bin/sh

# Run the internal tests of conntrack

set -e

cd tests/conntrack
bash -e ./run-test.sh
exit $?
