<!--
     Copyright 2024, UNSW
     SPDX-License-Identifier: CC-BY-SA-4.0
-->
# Example - Domain

This is a basic runtime domain schedule example that has 2 protection domains
which continually print their app number during initialisation.

App 1 should run for ~1 second and then App 2 should run for ~5 seconds. Then that
schedule repeats over and over. The schedule is defined by system ticks so it depends
on the system clock. This was developed for the ZCU102, which has tick rate of 100 MHz.
Other platforms may have different clock rates so the timing could differ.

All supported platforms are supported in this example.

## Building

```sh
mkdir build
make BUILD_DIR=build MICROKIT_BOARD=<board> MICROKIT_CONFIG=<debug/release/benchmark> MICROKIT_SDK=/path/to/sdk
```

## Running

See instructions for your board in the manual.
