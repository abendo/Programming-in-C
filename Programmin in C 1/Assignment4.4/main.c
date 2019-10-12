/*
JTSK-320111
a4 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
void print_form(int n, int m, char c);

int main() {
    int n, m;
    char c;
    scanf("%d", &n); /* scan n for number of rows */
    getchar();
    scanf("%d", &m); /* scan m for number of columns */
    getchar();
    scanf("%c", &c); /* scan c for the char you want to print */
    getchar();
    print_form(n, m, c);
    return 0;

}
void print_form(int n, int m, char c){

    for (int row = 1 ; row <= n ; row++ ) /* number of rows*/
    {
        for(int column = 1; column<=m; column++) {  /* number of columns*/
        printf("%c", c);
    }
    printf("\n"); /* print the trapezoid shape */
    m++;
    }
}

