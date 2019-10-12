/**
* ALBRIT BENDO
* Write a function void itobs(unsigned int no, char ∗ str), which receives an unsigned
* integer and a character pointer as parameters. The function should convert an unsigned integer
* into its binary string representation, therefore it determines the pattern of 1s and 0s of theun-
* signed integer and puts this into the string.
* Then write a program that repeatedly reads an unsigned integer from the keyboard that is passed
* to itobs(). Then the program prints the resulting string from the main function to standard
* output.
**/
#include <stdio.h>

void itobs(unsigned int no, char* str)
{
	int i = 31, j = 0;
	while(!(no & (1 << i)) && i != 0)
		i--;
	for(;i >= 0;i--)
	{
		if(no & (1 << i))
			str[j] = '1';
		else
			str[j] = '0';
		j++;
	}
	str[j] = '\0';
	printf("%s\n",str);
}

int main()
{
	char str[32];
	unsigned int no;
	scanf("%u",&no);
	itobs(no,str);
	return 0;
}
