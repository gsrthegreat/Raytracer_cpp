#!/bin/bash

set -e

BUILD_DIR=build

# create build folder if missing
mkdir -p $BUILD_DIR

cd $BUILD_DIR

# re-run CMake only if needed
cmake ..

# build using all CPU cores
make -j$(nproc)

echo "✔ Build complete!"
