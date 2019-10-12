/*
JTSK-320111
a6 p7.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
int isprime(int n, int i) {
    if (n == 1){ /* If you put 1 it is not a prime number */
        return 0;
    }
    else if (n == 0) { /* Also if you put 0 it is not a prime number */
        return 0;
    }
    else {
        if(i==1)
            return 1;
        if(n%i==0)
            return 0;
        return isprime(n, i-1);
    }
}
int main() {
    int num;
    scanf("%d", &num);
    if (isprime(num, ceil(num/2))==1) { /* Function for prime nums */
        printf("%d is prime\n", num);
    }
    else {
        printf("%d is not prime\n", num);
    }
    return 0;
}
