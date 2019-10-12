/*
JTSK-320111
a5 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

float geometric_mean(float arr[], int num); /* Prototype */

int main() {
    float arr[15], gmean, max, min, sum; /* Geometric mean, maximum value, minimum value, sum */
    char b;
    int i;
    for(i=0; i<15; i++) {
        scanf("%f", &arr[i]);
        if(arr[i] < 0) /* If you enter an valid number less then 0 */
            break;
    }
printf("Enter m,h,s or l = \n");
scanf(" %c", &b);
switch(b) {
    case 'm':
        gmean = geometric_mean(arr, i);
        printf("The geometric mean = %f\n", gmean);
        break;
    case 'h':
        max = arr[0];
        for(int j=0; j<i; j++)
        {
            if(arr[j]>max)
            {
                max = arr[j]; /* Calculate maximum value */
            }
        }
    printf("The highest number = %f\n", max);
        break;

    case 's':

        sum = 0;
        for(int x=0; x<i; x++)
        {
            sum += arr[x]; /* The sum */
        }
        printf("The sum = %f\n", sum);
        break;

    case 'l':
        min = arr[0];
        for(int m=0; m<i; m++)
        {
            if(arr[m]<min) /* Calculate minimum value */
            {
                min = arr[m];
            }
        }
        printf("The smallest number = %f\n", min);
        break;

    default:
        printf("Enter a valid letter\n");
        break;

    }
    return 0;
}

float geometric_mean(float arr[], int num)
{
    float gprod = 1;
    for(int i=0; i<num; i++)
    {
        gprod = gprod*arr[i];
    }
    float gmean = pow(gprod, (1.0/num));
    return gmean;
}
