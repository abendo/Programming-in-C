#include <stdio.h>

void find_max(int arr[10], int dim)
{
    int max;
    max = arr[0];
    for(int i = 0; i < dim; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    printf("The MAX element: %d\n", max);
}

int main()
{
    int arr[10] = {4, 2, 9, 5, 6, 1, 4, 3, 2, 10};
    find_max(arr, 10);
    return 0;
}