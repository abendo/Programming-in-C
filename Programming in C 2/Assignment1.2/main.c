/*
JTSK-320112
a1 p2.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#define CHECK(c) ((c & 1) == 0)? 0 : 1
// Condition (c & 1) if 0 else 1
int main()
{
    unsigned char c;
    //printf("Enter the character\n");
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", c);

    printf("The least significant bit is: %d\n", CHECK(c));
    // If I put CHECK(c) before printing it won't print anything

    return 0;
}
