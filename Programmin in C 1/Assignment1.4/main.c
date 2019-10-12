/* JTSK-320111
a1 p2.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
int x = 17;
int y = 4;
printf("x=%d\n", x);
printf("y=%d\n", y);
int sum;
sum = x + y;
printf("sum=%d\n", sum);
int product;
product = x + y;
printf("product=%d\n", product);
int difference;
difference = x - y;
printf("difference=%d\n", difference);
float division;
float x1 = 17.0;
float y2 = 4.0;
division = x1 / y2;
printf("division=%f\n", division);
int remainder = x % y;
printf("remainder of division=%d\n", remainder);
return 0;
}
