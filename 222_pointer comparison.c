#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int *ptr1,*ptr2;
	ptr1=&arr[0];
	ptr2=&arr[3];
	if(ptr1<ptr2)
	{
		printf("ptr1 is less than ptr2\n");
	}
	
	return 0;
}
