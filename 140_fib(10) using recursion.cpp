//ASSIGNMENT  PRINT FIB(10)
#include<stdio.h>
int fib(int n)
{
	if(n<=1)
	{
	return n;
	}
	return fib(n-1)+fib(n-2);
}
int main()
{
	int result;
	result=fib(10);
	printf("the result is %d",result);
	return 0;
}
