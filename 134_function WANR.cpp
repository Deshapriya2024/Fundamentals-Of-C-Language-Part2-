//function
//check a number tha is prime or not by using WANR
#include<stdio.h>
void prime(int num)
{
	int i=1,factor=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor++;
		}
	}
	if(factor==2){
		printf("prime");
	}
	else{
		printf("not");
	}
}
int main()
{
	prime(5);
	return 0;
}
