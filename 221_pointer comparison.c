#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int *ptr;
	ptr=&arr[0];
	
	if(ptr!=NULL)
	{
		printf("arr[0]=%d",*ptr);
	}
	
	return 0;
}
