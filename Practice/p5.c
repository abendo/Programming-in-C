/**
* ALBRIT BENDO
* Write a program that reads data from a file named data.txt and then sorts the rivers by length
* using the predefined qsort() function. The result is written to a file. The name of the file is
* being read from the keyboard.
* You will also need to implement a comparison function to make qsort() work correctly. If you
* do not know how to do this, just skip it, but still call the qsort() function.
* You can assume that the struct above are part of your program, and that data.txt will never
* contain more than 30 entries.
* You may not use global variables.
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct river {
    char name[40];
	int length;
    int drainage_area;
};
int lengthd(const void* va, const void* vb)
{
	const struct river* a = (const struct river*)va;
	const struct river* b = (const struct river*)vb;
	if(a -> length > b -> length)
		return 1;
	else if(a -> length < b -> length)
		return -1;
	else
		return 0;
}
		
int main()
{
	FILE* fp1, *fp2;
	char name[50], file[20];
	struct river list[30];
	int i = 0, length, drainage_area, q = 0;
	fgets(file, sizeof(file),stdin);
	file[strlen(file) - 1] = '\0';
	fp1 = fopen("data.txt", "r");
	if (fp1 == NULL)
		exit(1);
	fp2 = fopen(file,"w");
	if (fp2 == NULL)
		exit(1);
	while(fscanf(fp1,"%s",name) != EOF)
	{
		strcpy(list[i].name, name);
		fscanf(fp1, "%d", &length);
		list[i].length = length;
		fscanf(fp1, "%d", &drainage_area);
		list[i].drainage_area = drainage_area;
		i++;
	}
	qsort(list, i, sizeof(list[0]), lengthd);
	while(q < i)
	{
		fprintf(fp2,"%s ",list[q].name);
		fprintf(fp2,"%d ", list[q].length);
		fprintf(fp2,"%d\n", list[q].drainage_area);
		q++;
	}
	return 0;
	fclose(fp1);
	fclose(fp2);
}	
