#include<stdio.h>
int main()
{
	int arr[4]={10,20,30,40};
	int i;
	for(i=0;i<4;i++)
	{
		printf("arr[%d]=%u\n",i,*(arr+i));
	}
	
	return 0;
}
