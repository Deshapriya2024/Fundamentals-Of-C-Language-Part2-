//Confidential code #Not to share
//Triangle pattern-1 #userdefined
#include<stdio.h>
int num=4,number=1;
int print(int n)
{
	if(n>0 && n<=num)
	{
		printf("*");
		return print(n-1);
	}
	if(n==0 && n<=num)
	{
		printf("\n");
		return print(++number);
	}
	return;
}
int main()
{
	printf("Enter the number of rows you want : ");
	scanf("%d",&num);
	print(number);
	return 0;
}
