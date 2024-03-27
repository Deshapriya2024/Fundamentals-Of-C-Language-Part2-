#include<stdio.h>
void test(int*);
void test(int *a)
{
	*a=0;
	printf("Inside test function a=%d\n",*a);
}
int main()
{
	int a=23;
	printf("Inside main function-before calling test function a=%d\n",a);
	test(&a);//call by reference
	printf("Inside main function-after calling test  function a=%d\n",a);
	return 0;
}
