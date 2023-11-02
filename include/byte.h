#ifndef NUMBER_H
#define NUMBER_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "alu_logic.h"
#include "bit_def.h"

typedef unsigned char byte;

void flip_bit(byte b, int nPosition);
void print_byte(byte b);

#endif // NUMBER_H
