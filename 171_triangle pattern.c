//Confidential code #Not to share
//Triangle pattern-4 #userdefined
#include<stdio.h>
int num=4;
int print(int n)
{
	if(n>0)
	{
		printf("*");
		return print(n-1);
	}
	if(n==0)
	{
		printf("\n");
		return print(--num);
	}
	return;
}
int main()
{
	printf("Enter the number of rows you want : ");
	scanf("%d",&num);
	print(num);
	return 0;
}
