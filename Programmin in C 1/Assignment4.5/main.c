/*
JTSK-320111
a4 p5.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
int main() {
int n;
float nr[10], sum = 0, ave, num;
printf("Input 10 numbers=\n");
for(n=0; n<10; n++) { /* Put 10 integers from the keyboard */
    scanf("%f", &num);
    nr[n] = num;
    if(nr[n] == -99.0)
    {
        break;
    }
}
for(int m=0; m<n; m++)
{
    sum += nr[m];
}
ave=sum/n;
printf("Sum of numbers=\n"); /* You will get the sum of the numbers you entered */
printf("%f\n", sum);

printf("Average of numbers=\n"); /* And also the average of them */
printf("%f\n", ave);
return 0;
}
