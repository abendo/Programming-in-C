/*
JTSK-320112
a1 p5.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char c;
    int res=0;

    scanf("%c", &c);

    printf("The decimal representation is: %d\n", c); // The decimal representation only using %d

    int length =0;
    int x = c + ' ' + 32;
    while(1) // To find the length of the binary representation
    {
        x = x/2;
        if(x==0)
            break;
        else
            length++;
    }

    printf("The backwards binary representation is: ");

    for(int i=0; i<length; i++)// Using bitwise operations to find the binary code
    {
        res<<=1;
        if((c & 1)==1)
        {
            res++;
            printf("1");
        }
        else
        printf("0");
        c>>=1;
    }
    printf("\n");

    return 0;
}
