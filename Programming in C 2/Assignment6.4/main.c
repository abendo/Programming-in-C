/*
JTSK-320112
a6 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// using a struct Names
typedef struct names
{
    char name[20];
    int pos;
    struct names *next;
} Names;
// List with the data we will use
Names *create_list(Names *l, char *temp1, int pos)
{
    Names *temp;
    temp = (Names*)malloc(sizeof(Names)*1);
    strcpy(temp->name, temp1);
    temp -> pos = pos;
    temp -> next = l;

    return temp;
}
// creating from the file
Names *create_from_file(FILE *fp)
{
    char ch;
    int i=0, check=0, pos;

    Names *l = NULL;

    char temp1[20];
    temp1[0] = '\0';

    while(1)
    {
        if(check == 1)
            break;
        while((ch = fgetc(fp)) != '\n')
        {
            temp1[i] = ch;
            i++;
        }
        temp1[i] = '\0';

        pos = ftell(fp);
        l = create_list(l, temp1, pos);

        while((ch = fgetc(fp)) != '\n')
        {
            if(ch == EOF)
            {
                check = 1;
                break;
            }
        }
        i=0;
    }
    return l;
}

int check_username(char *s, Names *l, int *i)
{
    int flag = 0;
    Names *cursor = l;
    *i = 0;

    while(cursor != NULL)
    {
        if(strcmp(cursor->name, s) == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            cursor = cursor->next;
            (*i)++;
        }
    }
    return flag;
}

int check_password(FILE *fp, Names *l, char *pass, int *i)
{
    Names *cursor;

    cursor = l;
    int m=0, flag=0;
    char c, temp[20];

    while(m != *i)
    {
        cursor = cursor -> next;
        m++;
    }
    m=0;

    fseek(fp, cursor->pos, SEEK_SET); // set posting for reading password from file

    while((c = fgetc(fp)) != '\n')
    {
        if(c == EOF)
            break;
        else
        {
            temp[m] = c;
            m++;
        }
    }
    temp[m] = '\0';

    if(strcmp(pass, temp) == 0)
    {
        flag = 1;
    }

    return flag;
}

int main()
{
    char username[20], password[20], file_name[20];
    FILE *fp;
    Names *l = NULL;
    int i=0;

    fgets(file_name, 20, stdin);
    file_name[strlen(file_name) - 1] = '\0';

    fp = fopen(file_name, "r");

    if(fp == NULL)
    {
        printf("File not opened!\n");
        exit(1);
    }

    l = create_from_file(fp);

    while(strcmp(username, "exit") != 0)
    {
        fgets(username, 20, stdin);
        username[strlen(username) -1] = '\0';

        if(check_username(username, l, &i) == 1)
        {
            fgets(password, 20, stdin);
            password[strlen(password) -1] = '\0';

            if(check_password(fp, l, password, &i) == 1)
            {
                printf("Access to user %s is granted.\n", username);
            }
            else
                printf("Access to user %s is denied.\n", username);
        }

    }

    printf("Exiting ...\n");
    fclose(fp);

    return 0;
}
