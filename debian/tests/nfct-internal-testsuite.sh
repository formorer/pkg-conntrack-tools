#!/bin/sh

# Run the internal tests of nfct

set -e

cd tests/nfct
sh -e ./run-test.sh
exit $?
