#include "../include/instructions/shifter.h"

byte arithmetic_shift_left(byte b, int nShift) {

}

byte arithmetic_shift_right(byte b, int nShift) {

}

byte rotate_left(byte b, int nShift) {
    if ((nShift &= sizeof(b) * 8 - 1) == 0)
      return b;
    return (b << nShift) | (b >> (sizeof(b) * 8 - nShift));
}

byte rotate_right(byte b, int nShift) {
    if ((nShift &= sizeof(b) * 8 - 1) == 0)
      return b;
    return (b >> nShift) | (b << (sizeof(b) * 8 - nShift));
}