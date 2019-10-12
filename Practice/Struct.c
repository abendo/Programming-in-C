#include <stdio.h>
#include <string.h>

typedef struct Work
{
    char name[50];
    int age;
    char nationality[50];
}Employ;

int main()
{
    Employ obj_1 = { "Albrit Bendo", 18, "Albania" }; // Assign the values to the variables 
    Employ obj_2 = { "x y", 27, "Albania" };

    printf("Name: %s\n", obj_1.name); // We access by .
    printf("Age: %d\n", obj_1.age);
    printf("Nationality: %s\n", obj_1.nationality);

    printf("Name: %s\n", obj_2.name);
    printf("Age: %d\n", obj_2.age);
    printf("Nationality: %s\n", obj_2.nationality);

    return 0;
}
