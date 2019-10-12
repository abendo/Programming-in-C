/* JTSK-320111
a1 p2.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
int result;
result = (2 + 7) * 9 / 3;
printf("The result is %d\n", result);
return 0;
}

/*
Fix the program below such that it prints the correct value. Why does the program print “The
result is -1073745604”? (Values will vary). Write your answer and explanations within
comments.

#include <stdio.h>
int main() {
int result; / ∗ The result of our calculation
result = (2 + 7) ∗ 9 / 3;
printf("The result is %d\n");
return 0;
}

*/
