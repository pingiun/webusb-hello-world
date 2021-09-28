/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();
    while (true) {
        char c = getchar();
        if (c == 'a') {
            printf("You sent a!\n");
        } else {
            printf("You did not send a!\n");
        }
    }
    return 0;
}
