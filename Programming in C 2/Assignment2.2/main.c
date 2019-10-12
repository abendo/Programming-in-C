/*
JTSK-320112
a2 p2.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string_first[100];
    char string_second[100];

    fgets(string_first, 100, stdin); // Getting the input for the first string
    fgets(string_second, 100, stdin); // Getting the input for the second string

    string_first[strlen(string_first) - 1] = '\0'; // Removing the newline of the length of string
    string_second[strlen(string_second) - 1] = '\0';

    char *string_result = malloc(strlen(string_first) + strlen(string_second) + 1);
    // Concatenation of the strings with the exact length

    string_result[0] = '\0'; // Removing new line from the

    strcat(string_result, string_first); // Appending the string_first to result
    strcat(string_result, string_second); // Appending the string_second to result

    printf("Result of concatenation: %s\n", string_result); // Printing the string

    return 0;
}
