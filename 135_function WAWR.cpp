//function
//check a number tha is prime or not by using WAWR
#include<stdio.h>
int prime(int num)
{
	int i=1,factor=0;
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
	factor=prime(5);
		if(factor==2){
		printf("prime number");
	}
	else{
		printf("not a prime number");
	}
	return 0;
}
