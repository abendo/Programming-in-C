/*
JTSK-320112
a2 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr_negative, *ptr_first;
    int size;

    scanf("%d", &size);
    float *arr = malloc(size * sizeof(float));// Dynamically allocated array
    for(int i=0; i<size; i++)
    {
        scanf("%f", &arr[i]); // Reading the elements
    }

    for(ptr_negative = arr; *ptr_negative>=0; ptr_negative++) // Using pointers to find the smallest value
    {
    }

    ptr_first = arr; // Assign the first element of array to ptr_first

    int d = ptr_negative - ptr_first; // Sub of pointers

    printf("Before the first negative value: %d elements\n", d); // Printing

    return 0;
}
