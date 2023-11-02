#include "../include/byte.h"

struct Byte *new_0x00_byte(bool bSigned) {
    struct Byte *b = (struct Byte*) malloc(sizeof(struct Byte));
    b->data = (bit*) calloc(8, sizeof(bit));
    b->bSigned = bSigned;
    return b;
}

void flip_bit(struct Byte *b, int position) {
    b->data[position] = not(b->data[position]);
}

void print_byte(struct Byte *b) {
    printf("Signed: ");
    for (int i=0; i<8; i++) {
        printf("%i", b->data[i]);
    }
    printf("\n");
}