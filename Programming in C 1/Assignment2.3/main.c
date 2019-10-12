/* JTSK-320111
a1 p2.c
Albrit Bendo
a.bendo@jacobs-university.de */
#include <stdio.h>
int main() {
    int hours, days, weeks;
    printf("Please enter the number of weeks\n");
    scanf("%i", &weeks);
    printf("Please enter the number of days\n");
    scanf("%i", &days);
    printf("Please enter the number of hours\n");
    scanf("%i", &hours);
    int hourss = 24 * days + 24 * 7 * weeks + hours;
    printf("Total number of hours=%i\n", hourss);
    return 0;
}
