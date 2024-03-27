#include<stdio.h>
int main()
{
	float a=24.34;
	float *p;
	p=&a;
	printf("%f\n",a);
	printf("%f\n",*p);
	return 0;
}
