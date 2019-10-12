/*
JTSK-320112
a1 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#define INTERMEDIATE printf("The intermediate product values are:\n");

int main()
{
    int size, result=0;
    scanf("%d", &size);

    int *vector_one = malloc(sizeof(int)*size); // First vector
    for(int i=0; i<size; i++)
    {
        scanf("%d", &vector_one[i]);
    }

    int *vector_two = malloc(sizeof(int)*size); // Second vector
    for(int i=0; i<size; i++)
    {
        scanf("%d", &vector_two[i]);
    }

#ifdef INTERMEDIATE // Do if defined
    INTERMEDIATE; // Using a macro to print
   for(int i=0; i<size; i++) //
   {
            printf("%d\n", vector_one[i]*vector_two[i]);
   }
#endif // INTERMEDIATE

   for(int i=0; i<size; i++) // Finding the scalar product
    {
             result += vector_one[i] * vector_two[i];
    }

    printf("The scalar product is: %d\n", result); // Printing the scalar product

    return 0;
}
