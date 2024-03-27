//enter a char and check it is space or not
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character :\n");
	scanf("%c",&ch);
	if(isspace(ch))
	{
		printf("yes you are entetred space");
	}
	else
	{
		printf("no you are not entered space");
	}
	return 0;
}
