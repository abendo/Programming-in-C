/*
JTSK-320111
a5 p6.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void find_largestnums(int a[20], int n);

int main ()
{
    int *dyn_array, how_many, i;
    printf ("How many elements do you want to include?");
    scanf ("%d", &how_many ); /* Enter the nr of values */
    dyn_array = (int *) malloc (sizeof (int) * how_many); /* Allocate the memory */
    if (dyn_array == NULL)
        exit (1);
    for (i = 0; i < how_many; i++)
    {
        printf ("\nInput number %d:", i);
        scanf ("%d", &dyn_array [i]); /* Input the values */
    }
    find_largestnums(dyn_array, how_many);
    free(dyn_array); /* Release the memory */
    return 0;
}

void find_largestnums(int a[20], int n)
{
    int i, frstgreatest, secgreatest, temp;

    frstgreatest = a[0];
    secgreatest = a[1];

    if( secgreatest > frstgreatest )
    {
        temp = secgreatest;
        secgreatest = frstgreatest;
        frstgreatest = temp;
    }
    for(i=2; i < n ; i++)
        if(a[i] > frstgreatest)
        {
            secgreatest = frstgreatest;
            frstgreatest = a[i];
        }
        else if(a[i] > secgreatest)
            secgreatest = a[i];

    printf("The first greatest nr is %d and the second greatest nr is %d", frstgreatest, secgreatest);

    getchar();

}
