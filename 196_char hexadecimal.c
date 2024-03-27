//input a char chaek wherather it is hexadecimal char ot not
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	if(isxdigit(ch))
	{
		printf("char is hexadesimal");
	}
	else
	{
		printf("char is not hexadesimal");
	}
	return 0;
}
