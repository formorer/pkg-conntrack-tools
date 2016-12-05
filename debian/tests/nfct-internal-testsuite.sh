#!/bin/sh

# Run the internal tests of nfct

set -e

cd tests/nfct
bash -e ./run-test.sh
exit $?
