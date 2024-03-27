//function
//check a number is prime or not without using funtion
//5%1=0
//5%2=1
//5%3=2
//5%4=1
//5%5=0
#include<stdio.h>
int main()
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
	return 0;
}
