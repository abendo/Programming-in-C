#include <stdio.h>
#define SWAP(x, y, type) {type z = x; x = y; y = z;}

int main()
{
    int n1, n2;
    float f1, f2;
    printf("Enter integer data now!\n");
    scanf("%d%d", &n1, &n2);
    printf("You entered the data int: n1 = %d and n2 = %d\n", n1, n2);
    SWAP(n1, n2, int);
    printf("Swapping...\n");
    printf("n1 = %d and n2 = %d\n", n1, n2);
    printf("Enter float data now!\n");
    scanf("%f%f", &f1, &f2);
    printf("You entered the data float: f1 = %f and f2 = %f\n", f1, f2);
    SWAP(f1, f2, float);
    printf("Swapping...\n");
    printf("f1 = %f and f2 = %f\n", f1, f2);
    printf("Thank you!\n");
    return 0;
    }