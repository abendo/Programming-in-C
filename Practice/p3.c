/**
* ALBRIT BENDO
* Write a program that creates a matrix of r rows and c columns and then initializes it with values
* that are read from a file. Then the matrix is printed to the screen.
* You will read the data from a file named matrix.dat, which contains the number of rows in
* the first line, the number of columns in the second line, then values are given for given rows and
* columns (see input structure and example below).
* Also implement a function to print the matrix where the prototype looks like this:
* void print_matrix(int ∗∗ A, int rows, int cols)
**/
#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE* fp;
	int a, b, i, j, **arr, id1, id2, n;
	fp = fopen("matrix.txt","r");
	if (fp == NULL)
		exit(1);
	fscanf(fp,"%d",&a);
	fscanf(fp,"%d",&b);
	arr = (int**)malloc(sizeof(int*) * a);
	if (arr == NULL)
		exit(1);
	for(i = 0; i < a; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * b);
		if (arr[i] == NULL)
			exit(1);
	}
	for(i = 0; i < a; i++)
		for(j = 0; j < b; j++)
			arr[i][j] = 0;
	while(fscanf(fp, "%d %d %d", &id1, &id2, &n) != EOF)
		arr[id1 - 1][id2 - 1] = n;
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	for(i = 0; i < a; i++)
		free(arr[i]);
	free(arr);
	fclose(fp);
	return 0;
}
