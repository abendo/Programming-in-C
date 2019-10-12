/*
JTSK-320111
a6 p2.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
void divby5(float arr[], int size) /* We write the function first */
{
    int i;
    for(i=0; i<size; i++) {
        arr[i] = arr[i]/5;
    }
    for(i=0; i<size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}
int main() { /* Then the main */
float a[6]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
int i;

printf("Before:\n");
for(i=0; i<6; i++) {
    printf("%.3f ", a[i]);
}
printf("\n");
printf("After:\n");
divby5(a, 6);
return 0;
}
