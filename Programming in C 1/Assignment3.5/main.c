/* JTSK-320111
a3 p5.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
    int n, i, total;

    scanf(" %d", &n );
    while(n <= 0){
        printf("Input is invalid, reenter value\n"); /* If you put a number lower than 0 the input will be invalid */
        scanf("%d", &n);
        if( n<=0 ) {
                continue;
        }

    }

    for ( i=1; i<=n; i++ ) {
       total = i*24;

        if ( i == 1 ){
        printf("%d day = %d hours\n", i, total);
        }

     else {
        printf("%d days = %d hours\n", i, total); /* The equation as it says 1 day is equal with 24 hours */

 }
 }
 return 0;
 }


