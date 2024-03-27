//ADDITION OF RWO NUMBER BY USING -
//WITH ARGUMENT WITH RETURN TYPE(wAWR)
#include<stdio.h>
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int main()
{
	int result;
	result=add(10,20);
	printf("%d",result);
	return 0;
}
