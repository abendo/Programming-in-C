/*
JTSK-320111
a5 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
int count_consonants(char str[]); /* The function provided by the Assignment */


int main()
{
    char str[100];
    fgets(str, 100, stdin);

    for (; 1;)
    {
        if (str[0] =='\n') {
        break;
        }

        else {

        count_consonants(str);
        fgets(str, 100, stdin);
        }
    }
    return 0;
}

int count_consonants(char str[]) {
    int j, vowels, consonants;
    vowels =  consonants = 0;
    for( j=0; str[j]!='\0'; ++j){

        if(str[j]=='a' || str[j]=='e' || str[j]=='i' || /* This checks if the letters are vowels */
                str[j]=='o' || str[j]=='u' || str[j]=='A' ||
                str[j]=='E' || str[j]=='I' || str[j]=='O' ||
                str[j]=='U')
        {
            ++vowels;
        }
        else if((str[j]>='a'&& str[j]<='z') || (str[j]>='A'&& str[j]<='Z')) {
            ++consonants; /* This checks if they are consonants */
        }
    }
    printf("Number of consonants=%d\n",consonants); /* Then print the number of consonant */
    return consonants;

}
