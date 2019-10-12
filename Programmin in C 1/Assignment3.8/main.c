/* JTSK-320111
a3 p8.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
char c;
int n;

scanf("%c", &c);
scanf("%d", &n);
if(((c<'a') || (c>'z')) || ((n>32) || (n<7))) /* Using or || to define the function */
    return 1;

else
    for (int i=1; i<n; i++)
    {
        printf("The character before the last one is %c\n", c-i);
    }
return 0;
}

