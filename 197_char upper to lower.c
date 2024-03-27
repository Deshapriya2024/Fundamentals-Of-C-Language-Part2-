//input a uppercase char and convert it into lower case char
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	printf("%c---------->%c",ch,tolower(ch));
	return 0;
}
