/*
JTSK-320112
a1 p7.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// A function to turn the bits
unsigned char set3bits(char c, int m, int n, int p)
{
    c |=1 <<m;
    c |=1 <<n;
    c |=1 <<p;
    return c;
}

int main()
{
    unsigned char c;
    int m,n,p;

    scanf("%c", &c);
    scanf("%d%d%d", &m, &n, &p);

    printf("The decimal representation is: %d\n", c); // The decimal value

    printf("The binary representation is: ");
    for(int i=7; i>=0; i--)
    {
        printf("%c",'0' + ((c >> i) & 1)); // The binary using bitwise operations
    }
    printf("\n");

    unsigned char ch=set3bits(c,m,n,p); // Calling the function

    printf("After setting the bits: ");

    for(int i= 7; i>=0; i--)
    {
        printf("%c",'0' + ((ch >> i) & 1)); // Printing the binary with turned bits
    }
    printf("\n");

    return 0;
}
