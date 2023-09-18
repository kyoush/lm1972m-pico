#!/bin/sh

# Docker environment
docker run --rm -i \
    -v /home/${USER}/workspace/lm1972m-pico:/home/develop/workspace/lm1972m-pico \
    -w /home/develop/workspace/lm1972m-pico \
    -u $(id -u $USER):$(id -g $USER) \
    raspi-pico-sdk \
    /bin/bash << EOF
    cmake . -Bbuild
    cd build
    make -j4
