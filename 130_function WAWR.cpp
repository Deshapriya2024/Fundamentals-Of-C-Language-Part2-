//function
//find out factorial of a number WAWR
#include<stdio.h>
int fact(int num)
{
	int fact=1;
	while(num!=0)
	{
		fact=num*fact;
		num--;
	}
    return fact;
}
int main()
{
	int result;
	result=fact(4);
	printf("factorial of a number is %d", result);
	return 0;
}
