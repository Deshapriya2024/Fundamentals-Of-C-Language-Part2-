//check a char is capital or lower 
#include<stdio.h>
int main()
{
	int ch;
	printf("Enter a charachter: \n");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("%c is a alphabet",ch);
	}
	else
	{
		printf("%c is not a alphabet",ch);
	}
	return 0;
}
