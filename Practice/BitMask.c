#include <stdio.h>

void check_case(char c)
{
    if((c & 0b00100000)==0b00100000)
    {
        printf("Lowercase\n");
    }
    
    if((c & 0b00100000)==0)    
    {
        printf("Upercase\n");
    }    
}

int main()
{
    char c;
    while(1)
    {
        scanf("%c", &c);
        if(c != 'x')
        {
            check_case(c);
        }
        else
        {
            break;
        }
    }
    return 0;
}