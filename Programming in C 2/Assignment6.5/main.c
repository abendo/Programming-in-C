/*
JTSK-320112
a6 p5.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE **fp, *out;

    int file = 0;
    int m = 0, flag = 0;
    char name[20];
    char buff[64];
    memset(buff, '\0', 64);

    scanf("%d", &file);
    getchar();
// creating a memory allocation for the number of files
    fp = (FILE**)malloc(sizeof(FILE) * file);
    out = fopen("output.txt", "w"); // write in output.txt
// for each file get the name of file
    for(int i=0; i<file; i++)
    {
        fgets(name, 20, stdin);
        name[strlen(name)-1] = '\0';

        fp[i] = fopen(name, "r");

        if(fp[i] == NULL)
        {
            printf("Error on %d file", i+1);
            exit(1);
        }
    }

    int a = 0;
// take the info from each file and write it in output.txt
    while(m!=file)
    {
        flag = 0;
        memset(buff, '\0', 64);

        while(fread(buff, 64, 1, fp[m])==0)
        {
            fwrite(buff, 1, 64, out);
            fprintf(out, "\r\n");
            printf("%s\n", buff);
            memset(buff, '\0', 64);
            m++;
            flag = 1;
            if(m == file)
            {
                break;
                a=1;
            }
        }

        if(flag==1)
            continue;

        while(a==0)
        {
            fwrite(buff, 1, 64, out);
            printf("%s\n", buff);
        }
    }
    printf("The result was written into output.txt");
// close all the files
    for(int i=0; i<file; i++)
    {
        fclose(fp[i]);
    }
// free the pointer fp used to point to files
    free(fp);
    fclose(out);
    return 0;
}
