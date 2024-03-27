//recursion
//factorial ::--the factorial of a number is the multiplication of all the integers form n to 1.
#include<stdio.h>
int fact(int num)
{
	int result;
	if(num==0)
	{
	result=1;
	}
	else
	{
	result=num*fact(num-1);
	}
	return result;
}
int main()
{
	int result;
    result=fact(3);
    printf("fatorial of a number is %d",result);
	return 0;
}
