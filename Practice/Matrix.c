#include <stdio.h>
#include <stdlib.h>

void create3D(int ***arr, int row, int col, int dep)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            for(int k = 0; k < dep; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
}

void print3D(int ***arr, int row, int col, int dep)
{
    for(int i = 0; i < dep; i++)
    {
        printf("Section: %d\n", i+1);
        for(int j = 0; j < row; j++)
        {
            for(int k = 0; k < col; k++)
            {
                printf("%d ", arr[j][k][i]);
            }
            printf("\n");
        }
    }
}

void free3D(int ***arr, int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
}

int main()
{
    int ***arr;
    int row, col, dep;
    scanf("%d%d%d", &row, &col, &dep);

    arr = (int***)malloc(sizeof(int**)*row);

    for(int i = 0; i < row; i++)
    {
        arr[i] = (int**)malloc(sizeof(int*)*col);
        for(int j = 0; j < col; j++)
        {
            arr[i][j] = (int*)malloc(sizeof(int*)*dep);
        }
    }

    create3D(arr, row, col, dep);
    print3D(arr, row, col, dep);   
    free3D(arr, row, col);

    return 0;
}