/* JTSK-320111
a3 p4.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
int n;
int i=1; /* If you put an integer it will show the days and hours */
scanf("%d", &n);

if(i=1){
    printf("1 day = 24 hours\n"); /* Of course 1 day = 24 hours so we write the program */
}
while (i+1<=n) {
        printf("%d days = %d hours\n", i+1, (i+1)*24); /* It will calculate the number of hours per each number of days */
        i++;

}
return 0;
}
