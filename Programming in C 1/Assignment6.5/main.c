/*
JTSK-320111
a6 p5.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double scalar_product(double arr1[], double arr2[], int n);
double smallest1(double arr1[], int n);
int smallestposition1( double arr1[], int n);
double largest1(double arr1[], int n);
int largestposition1( double arr1[], int n);


int main(){
    double dyn_array1[500];
    double dyn_array2[500];
    int how_many, i, j;
    scanf ("%d", &how_many );
     /* Number of elements */
    if (dyn_array1 == NULL || dyn_array2 == NULL)
        exit (1);

    for (i = 0; i < how_many; i++){

        scanf ("%lf", &dyn_array1 [i]);
    }

    for (j = 0; j < how_many; j++){
        scanf ("%lf", &dyn_array2 [j]);
    }
    printf("Scalar product=%lf\n", scalar_product(dyn_array1, dyn_array2, how_many));

    printf("The smallest = %lf\n", smallest1(dyn_array1, how_many));

    printf("Position of smallest = %d\n", smallestposition1(dyn_array1, how_many));

    printf("The largest = %lf\n", largest1(dyn_array1, how_many));

    printf("Position of largest = %d\n", largestposition1(dyn_array1, how_many));

    printf("The smallest = %lf\n", smallest1(dyn_array2, how_many));

    printf("Position of smallest = %d\n", smallestposition1(dyn_array2, how_many));

    printf("The largest = %lf\n", largest1(dyn_array2, how_many));

    printf("Position of largest = %d\n", largestposition1(dyn_array2, how_many));


    return 0;
    }
double scalar_product(double arr1[], double arr2[], int n){
    double spro;
    for (int i = 0; i < n; i++){
        spro += (arr1[i]) * (arr2[i]);
    }
    return spro;
    }
double smallest1(double arr1[], int n){
    int i;

    double min1 = arr1[0];

    for (i = 0; i < n; i++)
        if (arr1[i] < min1)
            min1 = arr1[i];

    return min1;
    }
int smallestposition1( double arr1[], int n){

    int i;
    int index = 0;

    double min1 = arr1[0];

    for (i = 0; i < n; i++){
        if (arr1[i] < min1){
            min1 = arr1[i];
            index = i;
    }
    }
    return index;
    }
double largest1(double arr1[], int n){
    int i;

    double max1 = arr1[0];

    for (i = 0; i < n; i++)
        if (arr1[i] > max1)
            max1 = arr1[i];

    return max1;
    }
int largestposition1( double arr1[], int n){

    int i;
    int index = 0;

    double max1 = arr1[0];

    for (i = 0; i < n; i++){
        if (arr1[i] > max1){
            max1 = arr1[i];
            index = i;
    }
    }
    return index;
    }
