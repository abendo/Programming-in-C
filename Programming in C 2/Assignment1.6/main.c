/*
JTSK-320112
a1 p6.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char c;
    scanf("%c", &c);

    // The decimal representation of char c
    printf("The decimal representation is: %d\n", c);

    printf("The binary representation is: ");
    for(int i= 7; i >= 0; i--)
    { // As a char have 8bits
        printf("%c",'0' + ((c >> i) & 1));  // Using bitwise operations
    // Adding '0' so we can have the nr bits
    }
    printf("\n");
    return 0;
}
