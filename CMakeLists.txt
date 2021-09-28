cmake_minimum_required(VERSION 3.13)

# initialize pico-sdk from GIT
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_FETCH_FROM_GIT on)

# pico_sdk_import.cmake is a single file copied from this SDK
# note: this must happen before project()
include(pico_sdk_import.cmake)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

project(webusb_hello_world)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(hello_webusb
            hello_webusb.c
            )

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(hello_webusb pico_stdlib)

# enable usb output, disable uart output
pico_enable_stdio_usb(hello_webusb 1)
pico_enable_stdio_uart(hello_webusb 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(hello_webusb)
