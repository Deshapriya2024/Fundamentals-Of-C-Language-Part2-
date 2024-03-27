//function
//find out factorial of a number WANR
#include<stdio.h>
void fact(int num)
{
	int fact=1;
	while(num!=0)
	{
		fact=num*fact;
		num--;
	}
	printf("factorial of a number is %d",fact);
}
int main()
{
	fact(4);
	return 0;
}
