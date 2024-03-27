//print fibonacci series using recursion
//what is fibonacci ?
//fibonacci is the pattern of numbers where result is calculated bassed on the addition of previous two terms .
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
	result=fib(3);
	printf("the result is %d",result);
	return 0;
}
