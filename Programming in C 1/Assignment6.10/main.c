/*
JTSK-320111
a6 p10.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *fp1 = fopen("txt1.txt", "r"); /* Name of file txt1 */
FILE *fp2 = fopen("txt2.txt", "r"); /* Name of file txt2 */
FILE *fp3 = fopen("merge12.txt", "w");
char a;
if(fp1 == NULL || fp2 == NULL || fp2 == NULL){
    puts("error");
    exit(0);
}
while((a = fgetc(fp1)) != EOF) {
    fputc(a, fp3);
}

while((a = fgetc(fp2)) != EOF) {
    fputc(a, fp3);
    printf("success");
}

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
