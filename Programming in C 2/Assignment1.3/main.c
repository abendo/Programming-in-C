/*
JTSK-320112
a1 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b, c) ((a>b && a>c) ? a : \
                     ((b>c) ? b : c)) // Finding the max value using macro
#define MIN(a, b, c) ((a<b && a<c) ? a : \
                     ((b<c) ? b : c)) // Finding the min value using macro
#define MIDRANGE(a, b, c) (((MAX(a, b, c) + MIN(a, b, c))/2.0)) // Finding the mid-range
// I also converted to float by dividing with 2.0
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("The mid-range is: %.6f\n", MIDRANGE(a, b, c)); // Printing the mid-range
    return 0;
}

