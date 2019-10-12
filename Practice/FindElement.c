#include <stdio.h>
#include <stdlib.h>

int find_element(int arr[10], int size, int ele)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == ele)
            return i;
    }
    return -1;
}

int main()
{
    int arr[10] = {2, 9, 10, 4, 6, 12, 67, 78, 94, 28};
    find_element(arr, 10, 94);
    return 0;
}