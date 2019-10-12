/*
JTSK-320112
a4 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// valid struct person
struct person
{
    char name[30];
    int age;
};
// sort by name function
int sort_name(struct person *one, struct person *two)
{
    int name_compare = strcmp(one -> name, two -> name); // using strcmp c function to compare the string
    int age_compare = (two -> age < one -> age) - (one -> age < two -> age);
// as returning I used ? for if and : for else
    return name_compare != 0 ? name_compare : age_compare;
}
// sort by age function
int sort_age(struct person *one, struct person *two)
{
    int name_compare = strcmp(one -> name, two -> name);
    int age_compare = (two -> age < one -> age) - (one -> age < two -> age);

    return age_compare != 0 ? age_compare : name_compare;
}
// bubble sort algorithm
void bubble(struct person *person_compare, int size, int(*comparing)(struct person *one, struct person *two))
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(comparing(&person_compare[j+1], &person_compare[j]) < 0) // using the function pointer
            {
                struct person cmp = person_compare[j+1];
                person_compare[j+1] = person_compare[j];
                person_compare[j] = cmp;
            }
        }
    }
}

int main()
{
    int size;
    struct person *person_cmp;

    scanf("%d", &size);
    getchar();
// dynamic allocated person_cmp
    person_cmp = (struct person *)malloc(sizeof(struct person) * size);

    for(int i=0; i<size; i++)
    {
        fgets(person_cmp[i].name, 30, stdin);
        person_cmp[i].name[strlen(person_cmp[i].name)-1] = '\0';
        scanf("%d", &person_cmp[i].age);
        getchar();
    }
// calling the bubble function for both types of sorting
// here for name
    bubble(person_cmp, size, sort_name);

    for(int i=0; i<size; i++)
    {
        printf("{%s, %d}; ", person_cmp[i].name, person_cmp[i].age);
    }
    printf("\n");
// and here for age sort
    bubble(person_cmp, size, sort_age);

    for(int i=0; i<size; i++)
    {
        printf("{%s, %d}; ", person_cmp[i].name, person_cmp[i].age);
    }
    printf("\n");
// freeing the memory
    free(person_cmp);

    return 0;
}














