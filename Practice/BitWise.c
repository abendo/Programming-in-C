#include <stdio.h>
#define AND(x,y) (x & y)
#define OR(x, y) (x | y)
#define XOR(x, y) (x ^ y)
#define NOT(x) (~x)
int main()
{
    printf("Bitwise AND: %d\n", AND(7, 4)); // Performs the bitwise operations
    printf("Bitwise OR: %d\n", OR(7, 4));
    printf("Bitwise XOR: %d\n", XOR(7, 4));
    printf("Bitwise NOT: %d\n", NOT(7));
    return 0;
}

/**
 * 7 = 0111
 * 4 = 0100
 * 7 & 4 = 0100
 * 7 | 4 = 0111
 * 7 ^ 4 = 0011
 * ~7 = 1000
 * */
