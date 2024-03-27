//check a char is lower or not
#include<stdio.h>
int main()
{
	int ch;
	printf("Enter a charachter: \n");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("%c is a lower alphabet",ch);
	}
	else
	{
		printf("%c is not a lower alphabet",ch);
	}
	return 0;
}
