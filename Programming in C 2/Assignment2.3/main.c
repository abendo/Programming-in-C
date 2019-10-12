/*
JTSK-320112
a2 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
// m is the row
// n is the column
// p is the row of the result matrix
// m is the column for matrix c
void read(int** p1, int n, int m) // Function to read
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &p1[i][j]);
        }
    }
}

void print(int** p1, int n, int m) // Function to print
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", p1[i][j]);
        }
        printf("\n");
    }
}

void product(int** p1, int** p2, int** p3, int n, int m, int p) // Function for product
{
    int i,j,k, sum;
    for(i = 0; i < n; i++)
        for(k = 0; k < p; k++)
        {
            sum = 0;
            for(j = 0; j < m; j++)
                sum += p1[i][j]*p2[j][k];
            p3[i][k] = sum;
        }
}

void fring(int** p1, int n) // Function to free
{
    for(int i=0; i<n; i++)
    {
        free(p1[i]);
    }
    free(p1);
}
int main()
{
    int n, m, p;
    scanf("%d%d%d",&n, &m, &p);

    int **matrix_A;
    matrix_A = (int **)malloc(sizeof(int *) * n); // Decide the column size A

    int **matrix_B;
    matrix_B = (int **)malloc(sizeof(int *) * m); // Decide the column size B

    int **matrix_C;
    matrix_C = (int **)malloc(sizeof(int *) * n);

    for(int i=0; i<n; i++)
    {
        matrix_A[i] = (int *)malloc(sizeof(int) * m); // Decide the row size A
    }

    read(matrix_A, n, m);
    /*
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &matrix_A[i][j]); // Elements of the matrix A
        }
    }
    */
    for(int i=0; i< m; i++)
    {
        matrix_B[i] = (int *)malloc(sizeof(int) * p);
    }

    read(matrix_B, m, p);
    /*
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            scanf("%d", &matrix_B[i][j]); // Elements of the matrix B
        }
    }
    */
    for(int i=0; i< m; i++)
    {
        matrix_C[i] = (int *)malloc(sizeof(int) * p);
    }

    printf("Matrix A:\n");
    print(matrix_A, n, m);
    /*
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", matrix_A[i][j]);
        }
        printf("\n");
    }
    */
    printf("Matrix B:\n");
    print(matrix_B, m, p);
    /*
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d ", matrix_B[i][j]);
        }
        printf("\n");
    }
    */

    printf("The multiplication result AxB:\n");
    product(matrix_A, matrix_B, matrix_C, n, m, p);
    print(matrix_C, n, p);
    /*
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }
    */
    fring(matrix_A, n);
    fring(matrix_B, m);
    fring(matrix_C, n);
    return 0;
}
