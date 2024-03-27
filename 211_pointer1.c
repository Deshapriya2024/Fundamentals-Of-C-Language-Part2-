#include<stdio.h>
int main()
{
	int a=23;
	int *p;
	printf("%d\n",a);//direct access
	printf("%u\n",&a);
	p=&a;
	printf("%u\n",p);
	printf("%u\n",*p);//indirect access
	return 0;
}
