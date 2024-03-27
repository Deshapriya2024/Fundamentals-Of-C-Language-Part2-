#include<stdio.h>
int main()
{
	int arr[4]={10,20,30,40};
	printf("%d\n",*(arr+3)+*(arr+3));
	
	return 0;
}
