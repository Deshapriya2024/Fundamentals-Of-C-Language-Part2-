//function
//check a number is prime or not by using NAWR
#include<stdio.h>
int prime()
{
	int num=5,i=1,factor=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor++;
		}
	}
	return factor;
}
int main()
{
	int factor;
	factor=prime();
		if(factor==2)
		{
			printf("prime number");
		}
		else
		{
			printf("not a prime  number");
		}	
		return 0;
}
