//sum of 1-10 using call by reference
#include<stdio.h>
void sum(int *f)
{
	int i;
	for(i=1;i<=4;i++)
	{
		*f=*f * i;
	}
}
int main()
{
	int f=1;
	sum(&f);
	printf("factorial is %d\n",f);
	
	return 0;
}
