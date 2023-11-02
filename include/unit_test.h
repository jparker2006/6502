#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include <stdio.h>
#include <assert.h>

#include "gates.h"
#include "bit_def.h"

// Full Test Suite
void run_test_suite();

// Testing Bit Def
void test_mask_bit();

// Testing Logic Gates
void test_gates(); // Package
void test_and();
void test_not();
void test_nand();
void test_or();
void test_nor();
void test_xor();

// Testing Byte Vector
void test_byte();
void test_flip_bit();

#endif // UNIT_TEST_H
