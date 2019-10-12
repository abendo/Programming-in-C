/* JTSK-320111
a3 p7.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
char ch;
int n;
scanf ("%c", &ch);
scanf ("%d", &n);

for(int i=0; i<n; i++) {
printf("%c", ch-i); /* So the program will print the char ch n times */
}
return 0;
}

