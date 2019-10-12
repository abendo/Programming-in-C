/*
JTSK-320111
a6 p6.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>

int the_recursive(int nr) { /* Using the recursive function */
    if(nr == 0) /* If you enter 0 process returned 0 */
        return 1;
    printf("%d\n", nr);
    return the_recursive(nr-1); /* Print the numbers down the integer you put in */
}
int main(){
    int nr;
    scanf("%d", &nr);
    the_recursive(nr);
    return 0;
}
