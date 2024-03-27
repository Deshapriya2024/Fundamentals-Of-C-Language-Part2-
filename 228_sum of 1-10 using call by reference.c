//sum of 1-10 using call by reference
#include<stdio.h>
void sum(int *s)
{
	int i;
	for(i=1;i<=10;i++)
	{
		*s=*s+i;
	}
}
int main()
{
	int s=0;
	sum(&s);
	printf("sum is %d\n",s);
	
	return 0;
}
