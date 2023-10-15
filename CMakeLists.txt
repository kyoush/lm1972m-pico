# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

# Set the project name, the programming language
project(lm1972m-pico C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

add_executable(hello_serial
    hello_serial.c
    )

# pull in common dependencies
target_link_libraries(hello_serial pico_stdlib hardware_adc)

# Enable USB output, disable UART output
pico_enable_stdio_usb(hello_serial 1)
pico_enable_stdio_uart(hello_serial 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(hello_serial)
