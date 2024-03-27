//input a char and check it is alpha numeric or not
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	if(isalnum(ch))
	{
		printf("%c is alpha numeric",ch);
	}
	else
	{
		printf("%c is not alpha numeric",ch);
	}
	return 0;
}
