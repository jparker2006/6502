#ifndef NUMBER_H
#define NUMBER_H

#include "gates.h"
#include "bit_def.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Byte {
   bit *data;
   bool bSigned;
};

struct Byte *new_0x00_byte(bool bSigned);
void flip_bit(struct Byte *b, int position);
void print_byte(struct Byte *b);

#endif // NUMBER_H
