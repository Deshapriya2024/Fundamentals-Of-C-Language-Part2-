//chreck char is alphabet or not using isalpha() .. shortcut
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("%c is a alphabet",ch);
	}
	else
	{
		printf("%c is not a alphabet",ch);
	}
	return 0;
}
