/*
JTSK-320111
a6 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divby5(float *arr, int size);

int main() {
float *arr;
int n, i;
printf("Size of array = \n");
scanf("%d\n", &n);

arr = (float*)malloc(sizeof(float)*n); /* Save space */
if (arr == NULL) {
    exit(1);
}
for (i=0; i<n; i++) {
    scanf("%f", &arr[i]); /* Put values in the array */
}
divby5(arr, n);
free(arr); /* Free the array */
return 0;
}

void divby5(float *arr, int size) {
printf("Before = \n");
for(int i=0; i<size; i++) {
    printf("%.5f\n", arr[i]); /* The input */
}
printf("\n");
printf("After = \n");
for(int i=0; i<size; i++) {
    printf("%.5f\n", arr[i]/5); /* Nr divided by 5 */
}
printf("\n");
}
