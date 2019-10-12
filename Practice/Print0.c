#include <stdio.h>

int main()
{
    int n, m;
    char c;

    scanf("%d%d", &n, &m);
    getchar();
    scanf("%c", &c);

    for(int i = 0; i < n; i++) {
        if(i > 0 && i < n-1) {
            printf("%c", c);
        }
        else
            printf(" ");

        for(int j = 0; j < m; j++) {
            if(j > 0 && j < m-1) {
                printf("%c", c);
            }
            else 
                printf("\n");
        }
    }

    return 0;
}