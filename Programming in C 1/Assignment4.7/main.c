/*
JTSK-320111
a4 p7.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>

float product(float a1, float b1);
void productbyref(float a1, float b1, float *p);
void modifybyref(float *a1, float *b1);

int main(){
float a, b;
scanf("%f", &a); /* Input integer1 */
scanf("%f", &b); /* Input integer2 */
float product_1 = product(a, b);
printf("%f\n", product_1); /* Get the product of int1 and int2 */

modifybyref(&a, &b);
printf("%f, %f\n", a, b);
return 0;
}
float product(float a1, float b1) {
float p = a1 * b1;
return p;
}
void productbyref(float a1, float b1, float *p) { /* Using pointers */

float i;
i = a1 * b1;
*p = i;

return;
}
void modifybyref(float *a1, float *b1) {
*a1 = *a1 + 3;
*b1 = *b1 + 11;

return;

}
