#!/bin/bash

if [ -f "./build/etherc" ] ; then
    export PATH="$PATH:$(pwd)/build"
    # echo "PATH updated: $PATH"
fi
