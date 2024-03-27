#include<stdio.h>
int* fun()
{
	int a=100;
	return &a;
}
int main()
{
	int *ptr;
	printf("before calling fun fuction ptr is %p\n",ptr);
	ptr=fun();
	printf("After calling fun fuction ptr is %p\n",ptr);
	return 0;
}
