#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include <stdio.h>
#include <assert.h>

#include "bit_def.h"
#include "alu_logic.h"
#include "byte.h"
#include "adder.h"

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// Full Test Suite
void run_test_suite();

// Testing Bit Def
void test_mask_bit();

// Testing ALU Logic
void test_alu_logic();
void test_and();
void test_not();
void test_nand();
void test_or();
void test_nor();
void test_xor();

// Testing Byte
void test_byte();
void test_flip_bit();

// Testing Adder
void test_adder();
void test_half_adder();
void test_full_adder();

#endif // UNIT_TEST_H
