/*
JTSK-320111
a3 p9.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
int main() {
    char c;
    int n;
    printf("Enter the character you want=\n");
    scanf("%c", &c);
    printf("Enter the integer you want=\n");
    scanf("%d", &n);
    double te[100];
    double sum = 0;
    printf("Enter %d double values for temperature=\n", n);
    for(int i = 0; i<n; i++) {
        scanf("%lf", &te[i]);
    }
    switch(c) {
case 's': /* If you want the sum you press char s */
    for (int m = 0; m<n; m++) {
    sum += te[m];
    }

    printf("The sum for temperature= %lf\n", sum);

    break;

case 'p': /* If you want the list you press char p */
    printf("The list of temperatures=\n");
    for(int a = 0; a<n; a++) {
        printf("%lf\n", te[a]);
    }
    break;

case 't':
    printf("The value of temperatures in Fahrenheit=\n");
    for(int b = 0; b<n; b++) {
            printf("%lf\n", (te[b] * 9/5) + 32);
    }

    break;
default:
    printf("Average of all temperatures=\n");
    for(int p = 0; p<n; p++) {
    sum += te[p];
    }
    printf("%lf\n", sum / n);
    break;
}
return 0;
}

