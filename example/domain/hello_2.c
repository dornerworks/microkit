/*
 * Copyright 2021, Breakaway Consulting Pty. Ltd.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#include <stdint.h>
#include <microkit.h>

void init(void)
{
  while(1) {
    microkit_dbg_puts("App 2\r\n");
  }
}

void notified(microkit_channel ch)
{
}
