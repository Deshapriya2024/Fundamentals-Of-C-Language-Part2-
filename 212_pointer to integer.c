#include<stdio.h>
int main()
{
	int a=24;
	int *p;
	p=&a;
	printf("%d\n",a);
	printf("%d\n",*p);
	return 0;
}
