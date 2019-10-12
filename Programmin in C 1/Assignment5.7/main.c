/*
JTSK-320111
a5 p7.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n, arr[30][30]; /* The matrix with 30 rows and columns */
    scanf("%d", &n);
    for (int x = 0; x < n; x++) {

        for (int y =0; y < n; y++) {

            scanf("%d", &arr[x][y]);
        }
    }

    printf("The entered matrix is:\n"); /* Print the matrix */

    for (int x = 0; x < n; x++) {

        for (int y = 0; y < n; y++) {

        printf("%d ", arr[x][y]);
    }
        printf("\n");
    }
        printf("Under the main diagonal:\n"); /* Print elements which are under the main diagonal */
    for (int x =0; x<n; x++) {

        for (int y=0; y<x ; y++) {

        printf("%d ", arr[x][y]);
    }
    }

    printf("\n");
    return 0;
}
