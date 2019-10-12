/*
JTSK-320111
a4 p6.c
Albrit bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>

double sum(double v[], int i) { /* We specify the function so it will not freak out */
if(i<6) {
    printf("One or both positions are invalid");
    return -111; /* If it is invalid will return -111 */
    }
    else {
            printf("sum=%f", v[2] + v[5]);
    return v[2] + v[5]; /* Positions 2 and 5 */
}
}

int main() {
int i;
double v[20];
scanf("%d\n", &i);
for(int m = 0; m<i; m++)
    scanf("%lf", &v[m]);
sum(v, i);
printf("\n");
}
