#include <stdio.h>
int main() {
    double double1;
    double double2;
    double sum, diff, square;
    scanf("%lf", &double1);
    scanf("%lf", &double2);
    sum = (double1 + double2);
    diff = (double1 - double2);
    square = (double1 * double2);
    printf("sum of doubles%lf\n", sum);
    printf("diff of doubles%lf\n", diff);
    printf("square of doubles%lf\n", square);

    int n1;
    int n2;
    int sum2, product;
    scanf("%i", &n1);
    scanf("%i", &n2);
    sum2 = (n1 + n2);
    product = (n1 * n2);
    printf("sum of integers=%i\n", sum2);
    printf("product of integer=%i\n", product);

    char c1;
    char c2;
    int sum3, product2;
    getchar();
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);
    sum3 = (c1 + c2);
    product2 = (c1 * c2);
    printf("sum of chars=%d\n", sum3);
    printf("product of chars%d\n", c1 * c2);
    printf("sum of chars=%c\n", sum3);
    printf("product of chars=%c\n", product2);
    return 0;
}
