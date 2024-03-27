//function
//check a number is prime or not by using NANR
#include<stdio.h>
void prime()
{
	int num=7,i=1,factor=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor++;
		}
	}
		if(factor==2)
		{
			printf("prime number");
		}
		else
		{
			printf("not a prime  number");
		}	
}
int main()
{
	prime();
	return 0;
}
