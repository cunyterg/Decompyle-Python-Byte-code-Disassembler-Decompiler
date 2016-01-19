/* This file was auto-generated with comp_map.py.  DO NOT EDIT! */

#include "bytecode.h"

int python_24_map(int id)
{
    switch (id) {
    case 0: return Pyc::STOP_CODE;
    case 1: return Pyc::POP_TOP;
    case 2: return Pyc::ROT_TWO;
    case 3: return Pyc::ROT_THREE;
    case 4: return Pyc::DUP_TOP;
    case 5: return Pyc::ROT_FOUR;
    case 9: return Pyc::NOP;
    case 10: return Pyc::UNARY_POSITIVE;
    case 11: return Pyc::UNARY_NEGATIVE;
    case 12: return Pyc::UNARY_NOT;
    case 13: return Pyc::UNARY_CONVERT;
    case 15: return Pyc::UNARY_INVERT;
    case 18: return Pyc::LIST_APPEND;
    case 19: return Pyc::BINARY_POWER;
    case 20: return Pyc::BINARY_MULTIPLY;
    case 21: return Pyc::BINARY_DIVIDE;
    case 22: return Pyc::BINARY_MODULO;
    case 23: return Pyc::BINARY_ADD;
    case 24: return Pyc::BINARY_SUBTRACT;
    case 25: return Pyc::BINARY_SUBSCR;
    case 26: return Pyc::BINARY_FLOOR_DIVIDE;
    case 27: return Pyc::BINARY_TRUE_DIVIDE;
    case 28: return Pyc::INPLACE_FLOOR_DIVIDE;
    case 29: return Pyc::INPLACE_TRUE_DIVIDE;
    case 30: return Pyc::SLICE_0;
    case 31: return Pyc::SLICE_1;
    case 32: return Pyc::SLICE_2;
    case 33: return Pyc::SLICE_3;
    case 40: return Pyc::STORE_SLICE_0;
    case 41: return Pyc::STORE_SLICE_1;
    case 42: return Pyc::STORE_SLICE_2;
    case 43: return Pyc::STORE_SLICE_3;
    case 50: return Pyc::DELETE_SLICE_0;
    case 51: return Pyc::DELETE_SLICE_1;
    case 52: return Pyc::DELETE_SLICE_2;
    case 53: return Pyc::DELETE_SLICE_3;
    case 55: return Pyc::INPLACE_ADD;
    case 56: return Pyc::INPLACE_SUBTRACT;
    case 57: return Pyc::INPLACE_MULTIPLY;
    case 58: return Pyc::INPLACE_DIVIDE;
    case 59: return Pyc::INPLACE_MODULO;
    case 60: return Pyc::STORE_SUBSCR;
    case 61: return Pyc::DELETE_SUBSCR;
    case 62: return Pyc::BINARY_LSHIFT;
    case 63: return Pyc::BINARY_RSHIFT;
    case 64: return Pyc::BINARY_AND;
    case 65: return Pyc::BINARY_XOR;
    case 66: return Pyc::BINARY_OR;
    case 67: return Pyc::INPLACE_POWER;
    case 68: return Pyc::GET_ITER;
    case 70: return Pyc::PRINT_EXPR;
    case 71: return Pyc::PRINT_ITEM;
    case 72: return Pyc::PRINT_NEWLINE;
    case 73: return Pyc::PRINT_ITEM_TO;
    case 74: return Pyc::PRINT_NEWLINE_TO;
    case 75: return Pyc::INPLACE_LSHIFT;
    case 76: return Pyc::INPLACE_RSHIFT;
    case 77: return Pyc::INPLACE_AND;
    case 78: return Pyc::INPLACE_XOR;
    case 79: return Pyc::INPLACE_OR;
    case 80: return Pyc::BREAK_LOOP;
    case 82: return Pyc::LOAD_LOCALS;
    case 83: return Pyc::RETURN_VALUE;
    case 84: return Pyc::IMPORT_STAR;
    case 85: return Pyc::EXEC_STMT;
    case 86: return Pyc::YIELD_VALUE;
    case 87: return Pyc::POP_BLOCK;
    case 88: return Pyc::END_FINALLY;
    case 89: return Pyc::BUILD_CLASS;
    case 90: return Pyc::STORE_NAME_A;
    case 91: return Pyc::DELETE_NAME_A;
    case 92: return Pyc::UNPACK_SEQUENCE_A;
    case 93: return Pyc::FOR_ITER_A;
    case 95: return Pyc::STORE_ATTR_A;
    case 96: return Pyc::DELETE_ATTR_A;
    case 97: return Pyc::STORE_GLOBAL_A;
    case 98: return Pyc::DELETE_GLOBAL_A;
    case 99: return Pyc::DUP_TOPX_A;
    case 100: return Pyc::LOAD_CONST_A;
    case 101: return Pyc::LOAD_NAME_A;
    case 102: return Pyc::BUILD_TUPLE_A;
    case 103: return Pyc::BUILD_LIST_A;
    case 104: return Pyc::BUILD_MAP_A;
    case 105: return Pyc::LOAD_ATTR_A;
    case 106: return Pyc::COMPARE_OP_A;
    case 107: return Pyc::IMPORT_NAME_A;
    case 108: return Pyc::IMPORT_FROM_A;
    case 110: return Pyc::JUMP_FORWARD_A;
    case 111: return Pyc::JUMP_IF_FALSE_A;
    case 112: return Pyc::JUMP_IF_TRUE_A;
    case 113: return Pyc::JUMP_ABSOLUTE_A;
    case 116: return Pyc::LOAD_GLOBAL_A;
    case 119: return Pyc::CONTINUE_LOOP_A;
    case 120: return Pyc::SETUP_LOOP_A;
    case 121: return Pyc::SETUP_EXCEPT_A;
    case 122: return Pyc::SETUP_FINALLY_A;
    case 124: return Pyc::LOAD_FAST_A;
    case 125: return Pyc::STORE_FAST_A;
    case 126: return Pyc::DELETE_FAST_A;
    case 130: return Pyc::RAISE_VARARGS_A;
    case 131: return Pyc::CALL_FUNCTION_A;
    case 132: return Pyc::MAKE_FUNCTION_A;
    case 133: return Pyc::BUILD_SLICE_A;
    case 134: return Pyc::MAKE_CLOSURE_A;
    case 135: return Pyc::LOAD_CLOSURE_A;
    case 136: return Pyc::LOAD_DEREF_A;
    case 137: return Pyc::STORE_DEREF_A;
    case 140: return Pyc::CALL_FUNCTION_VAR_A;
    case 141: return Pyc::CALL_FUNCTION_KW_A;
    case 142: return Pyc::CALL_FUNCTION_VAR_KW_A;
    case 143: return Pyc::EXTENDED_ARG_A;
    default: return Pyc::PYC_INVALID_OPCODE;
    }
}

int python_24_unmap(int id)
{
    switch (id) {
    case Pyc::BINARY_ADD: return 23;
    case Pyc::BINARY_AND: return 64;
    case Pyc::BINARY_DIVIDE: return 21;
    case Pyc::BINARY_FLOOR_DIVIDE: return 26;
    case Pyc::BINARY_LSHIFT: return 62;
    case Pyc::BINARY_MODULO: return 22;
    case Pyc::BINARY_MULTIPLY: return 20;
    case Pyc::BINARY_OR: return 66;
    case Pyc::BINARY_POWER: return 19;
    case Pyc::BINARY_RSHIFT: return 63;
    case Pyc::BINARY_SUBSCR: return 25;
    case Pyc::BINARY_SUBTRACT: return 24;
    case Pyc::BINARY_TRUE_DIVIDE: return 27;
    case Pyc::BINARY_XOR: return 65;
    case Pyc::BREAK_LOOP: return 80;
    case Pyc::BUILD_CLASS: return 89;
    case Pyc::BUILD_LIST_A: return 103;
    case Pyc::BUILD_MAP_A: return 104;
    case Pyc::BUILD_SLICE_A: return 133;
    case Pyc::BUILD_TUPLE_A: return 102;
    case Pyc::CALL_FUNCTION_A: return 131;
    case Pyc::CALL_FUNCTION_KW_A: return 141;
    case Pyc::CALL_FUNCTION_VAR_A: return 140;
    case Pyc::CALL_FUNCTION_VAR_KW_A: return 142;
    case Pyc::COMPARE_OP_A: return 106;
    case Pyc::CONTINUE_LOOP_A: return 119;
    case Pyc::DELETE_ATTR_A: return 96;
    case Pyc::DELETE_FAST_A: return 126;
    case Pyc::DELETE_GLOBAL_A: return 98;
    case Pyc::DELETE_NAME_A: return 91;
    case Pyc::DELETE_SLICE_0: return 50;
    case Pyc::DELETE_SLICE_1: return 51;
    case Pyc::DELETE_SLICE_2: return 52;
    case Pyc::DELETE_SLICE_3: return 53;
    case Pyc::DELETE_SUBSCR: return 61;
    case Pyc::DUP_TOP: return 4;
    case Pyc::DUP_TOPX_A: return 99;
    case Pyc::END_FINALLY: return 88;
    case Pyc::EXEC_STMT: return 85;
    case Pyc::EXTENDED_ARG_A: return 143;
    case Pyc::FOR_ITER_A: return 93;
    case Pyc::GET_ITER: return 68;
    case Pyc::IMPORT_FROM_A: return 108;
    case Pyc::IMPORT_NAME_A: return 107;
    case Pyc::IMPORT_STAR: return 84;
    case Pyc::INPLACE_ADD: return 55;
    case Pyc::INPLACE_AND: return 77;
    case Pyc::INPLACE_DIVIDE: return 58;
    case Pyc::INPLACE_FLOOR_DIVIDE: return 28;
    case Pyc::INPLACE_LSHIFT: return 75;
    case Pyc::INPLACE_MODULO: return 59;
    case Pyc::INPLACE_MULTIPLY: return 57;
    case Pyc::INPLACE_OR: return 79;
    case Pyc::INPLACE_POWER: return 67;
    case Pyc::INPLACE_RSHIFT: return 76;
    case Pyc::INPLACE_SUBTRACT: return 56;
    case Pyc::INPLACE_TRUE_DIVIDE: return 29;
    case Pyc::INPLACE_XOR: return 78;
    case Pyc::JUMP_ABSOLUTE_A: return 113;
    case Pyc::JUMP_FORWARD_A: return 110;
    case Pyc::JUMP_IF_FALSE_A: return 111;
    case Pyc::JUMP_IF_TRUE_A: return 112;
    case Pyc::LIST_APPEND: return 18;
    case Pyc::LOAD_ATTR_A: return 105;
    case Pyc::LOAD_CLOSURE_A: return 135;
    case Pyc::LOAD_CONST_A: return 100;
    case Pyc::LOAD_DEREF_A: return 136;
    case Pyc::LOAD_FAST_A: return 124;
    case Pyc::LOAD_GLOBAL_A: return 116;
    case Pyc::LOAD_LOCALS: return 82;
    case Pyc::LOAD_NAME_A: return 101;
    case Pyc::MAKE_CLOSURE_A: return 134;
    case Pyc::MAKE_FUNCTION_A: return 132;
    case Pyc::NOP: return 9;
    case Pyc::POP_BLOCK: return 87;
    case Pyc::POP_TOP: return 1;
    case Pyc::PRINT_EXPR: return 70;
    case Pyc::PRINT_ITEM: return 71;
    case Pyc::PRINT_ITEM_TO: return 73;
    case Pyc::PRINT_NEWLINE: return 72;
    case Pyc::PRINT_NEWLINE_TO: return 74;
    case Pyc::RAISE_VARARGS_A: return 130;
    case Pyc::RETURN_VALUE: return 83;
    case Pyc::ROT_FOUR: return 5;
    case Pyc::ROT_THREE: return 3;
    case Pyc::ROT_TWO: return 2;
    case Pyc::SETUP_EXCEPT_A: return 121;
    case Pyc::SETUP_FINALLY_A: return 122;
    case Pyc::SETUP_LOOP_A: return 120;
    case Pyc::SLICE_0: return 30;
    case Pyc::SLICE_1: return 31;
    case Pyc::SLICE_2: return 32;
    case Pyc::SLICE_3: return 33;
    case Pyc::STOP_CODE: return 0;
    case Pyc::STORE_ATTR_A: return 95;
    case Pyc::STORE_DEREF_A: return 137;
    case Pyc::STORE_FAST_A: return 125;
    case Pyc::STORE_GLOBAL_A: return 97;
    case Pyc::STORE_NAME_A: return 90;
    case Pyc::STORE_SLICE_0: return 40;
    case Pyc::STORE_SLICE_1: return 41;
    case Pyc::STORE_SLICE_2: return 42;
    case Pyc::STORE_SLICE_3: return 43;
    case Pyc::STORE_SUBSCR: return 60;
    case Pyc::UNARY_CONVERT: return 13;
    case Pyc::UNARY_INVERT: return 15;
    case Pyc::UNARY_NEGATIVE: return 11;
    case Pyc::UNARY_NOT: return 12;
    case Pyc::UNARY_POSITIVE: return 10;
    case Pyc::UNPACK_SEQUENCE_A: return 92;
    case Pyc::YIELD_VALUE: return 86;
    default: return -1;
    }
}
