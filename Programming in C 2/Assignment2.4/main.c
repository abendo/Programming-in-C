/*
JTSK-320112
a2 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function to get the input for the 3D matrix
void matrix3dimensions(int ***matrix, int row, int column, int depth)
{
    for(int i=0; i<row; i++) // Getting the rows
    {
        for(int j=0; j<column; j++) // The columns
        {
            for(int k=0; k<depth; k++) // And the depth
            {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }
}

// Function to print the matrix by sections
void matrix3Dprint(int *** matrix, int row, int column, int depth)
{
    for(int i=0; i<depth; i++)
    {
        printf("Section %d:\n", i+1); // Depending on the i of depth print the Sections
        for(int j=0; j<row; j++)
        {
            for(int k=0; k<column; k++)
            {
                printf("%d ", matrix[j][k][i]);
            }
            printf("\n");
        }
    }
}

// A function to release the memory
void freematrix3D(int *** matrix, int row, int column)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            free(matrix[i][j]); // For each column
        }
        free(matrix[i]); // And row
    }
    free(matrix); // And all the matrix
}

int main()
{
    int ***matrix3d; // Creating a 3D matrix
    int row, column, depth;
    scanf("%d%d%d", &row, &column, &depth); // Input the elements

// Dynamic memory allocation of the 3D matrix
    matrix3d = (int ***)malloc(sizeof(int *) * row); // Dynamically allocated

    for(int i=0; i<row; i++)
    {
        matrix3d[i] = (int **)malloc(sizeof(int *) * column);
        for(int j=0; j<column; j++)
        {
            matrix3d[i][j] = (int *)malloc(sizeof(int) * depth);
        }
    }

// Calling the functions
    matrix3dimensions(matrix3d, row, column, depth);
    matrix3Dprint(matrix3d, row, column, depth);
    freematrix3D(matrix3d, row, column);

    return 0;
}
