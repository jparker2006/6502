#ifndef BIT_DEF_H
#define BIT_DEF_H

typedef unsigned char bit;

#ifndef BIT_MASK
#define BIT_MASK 0x01
#endif

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

bit mask_bit(bit);

#endif // BIT_DEF_H
