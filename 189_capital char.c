//check a char is capital or not
#include<stdio.h>
int main()
{
	int ch;
	printf("Enter a charachter: \n");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("%c alphabet is a capital letter",ch);
	}
	else
	{
		printf("%c alphabet is not a capital letter",ch);
	}
	return 0;
}
