#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50},i;
	int (*ptr)[5];
	ptr=&arr;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(*arr+i));
	}
	return 0;
}
