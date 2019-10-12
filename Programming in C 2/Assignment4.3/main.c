/*
JTSK-320112
a4 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// function for sorting in ascending
int sort_ascending_order(const void *low, const void *high)
{
    const int *a = (const int *) low;
    const int *b = (const int *) high;
    return *a - *b;
}
// function for sorting in descending order
int sort_descending_order(const void *low, const void *high)
{
    const int *a = (const int *) low;
    const int *b = (const int *) high;
    return *b - *a;
}

int main()
{
    int size;
    char ch;
// a function pointer
    int (*quick_sort)(const void *low, const void *high);
// creating dynamic allocated array
    scanf("%d", &size);
    int *array = (int *)malloc(sizeof(int)*size);
// reading the elements
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    getchar();

    while(1)
    {
        scanf("%c", &ch);
        getchar(); // getchar to read the char

        if(ch == 'e')
        {
            break;
        }
        else if(ch == 'a')
        {
            quick_sort = sort_ascending_order; // calling ascending order function
        }
        else if(ch == 'd')
        {
            quick_sort = sort_descending_order; // calling descending order function
        }

// calling the function pointer
        qsort(array, size, sizeof(array[0]), quick_sort);

        for(int i = 0; i<size; i++)
        {
            printf("%d ", array[i]); // printing the elements
        }
        printf("\n");
    }

    return 0;
}
