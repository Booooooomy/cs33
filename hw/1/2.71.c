#include <stdio.h>

typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum)
{
    return (word >> (bytenum * 4)) & 0xFF;
}

int main(void)
{
    /* set x to obvious byte pattern */
    packed_t x = 0x1234ABFF;

    printf("Packed value (x) = 0x%x, value returned by xbyte(x,0) = 0x%x\n",
	   x, xbyte(x,0));
    printf("Packed value (x) = 0x%x, value returned by xbyte(x,1) = 0x%x\n",
	   x, xbyte(x,1));
    printf("Packed value (x) = 0x%x, value returned by xbyte(x,2) = 0x%x\n",
	   x, xbyte(x,2));
    printf("Packed value (x) = 0x%x, value returned by xbyte(x,3) = 0x%x\n",
	   x, xbyte(x,3));


    printf("Packed value (x) = 0x%x, value returned by myxbyte(x,0) = 0x%x\n",
	   x, myxbyte(x,0));
    printf("Packed value (x) = 0x%x, value returned by myxbyte(x,1) = 0x%x\n",
	   x, myxbyte(x,1));
    printf("Packed value (x) = 0x%x, value returned by myxbyte(x,2) = 0x%x\n",
	   x, myxbyte(x,2));
    printf("Packed value (x) = 0x%x, value returned by myxbyte(x,3) = 0x%x\n",
	   x, myxbyte(x,3));
}
