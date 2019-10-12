/*
JTSK-320111
a6 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
void print_form (int n, char ch) {
    for(int row = n ; row >= 1 ; row-- ) {  /* n will be the number of rows */
        for(int column = row; column>=1; column--) {
        printf("%c", ch); /* char will be printed */
    }
    printf("\n");
    n++;
    }
}

int main() {
int n;
char ch;
scanf("%d", &n); /* integer */
getchar();
scanf("%c", &ch); /* char you want to print */
print_form(n, ch);
return 0;
}


