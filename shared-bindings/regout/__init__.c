// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2021 Kattni Rembor
//
// SPDX-License-Identifier: MIT

#include "py/mpconfig.h"

#include "shared-bindings/regout/__init__.h"

//| """`regout` module.
//|
//| Provides the `getreg()` function."""
//|
//| def getreg(r: int) -> int:
//|     """
//|     Get the value of a register by its address.
//|     """
//|     ...
//|
static mp_obj_t regout_getreg(mp_obj_t r) {
    mp_int_t ri = mp_obj_get_int(r);
    return MP_OBJ_NEW_SMALL_INT(getreg(ri));
}
static MP_DEFINE_CONST_FUN_OBJ_1(regout_getreg_obj, regout_getreg);

static const mp_rom_map_elem_t regout_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_regout) },
    { MP_ROM_QSTR(MP_QSTR_getreg), MP_ROM_PTR(&regout_getreg_obj) },
};

static MP_DEFINE_CONST_DICT(regout_module_globals, regout_module_globals_table);

const mp_obj_module_t regout_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&regout_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_regout, regout_module);
