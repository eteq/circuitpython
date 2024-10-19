// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2021 Kattni Rembor
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/regout/__init__.h"


uint32_t getreg(uint32_t r) {
    uint32_t *address = (uint32_t *)r;
    return *(address);
}