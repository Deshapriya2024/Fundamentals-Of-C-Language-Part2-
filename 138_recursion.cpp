// print even numbers from 100 to 0 using recursion
#include<stdio.h>
int even(int num)
{
	if(num<0)
	{
	printf("DESHAPRIYA PANIGRAHI ");
	}
	else
	{
		if(num%2==0)
		{
		printf("%i\n",num);
		}
		return even(num-1);
	}
}
int main()
{
	even(100);
	return 0;
}
