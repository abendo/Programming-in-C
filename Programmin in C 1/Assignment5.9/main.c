/*
JTSK-320111
a5 p9.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n);

int main(){

    int n, *arr;
    scanf("%d",&n);
    getchar();
    arr = (int*)malloc(sizeof(int)*n);
    if(arr == NULL){
        printf("Invalid\n");
        exit(1);
    }

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        getchar();
    }

    int product = prodminmax(arr, n);
    printf("Product is = %d", product);
    free(arr);
    return 0;
    }

int prodminmax(int arr[], int n) { /* Prints the product of the grates and smallest number */
    int max = arr[0];
    int min = arr[0];
    for(int a = 0; a < n; a++){
        if(max<=arr[a])
            max = arr[a];
        if(min>=arr[a])
            min = arr[a];


    }
    return max * min;

}
