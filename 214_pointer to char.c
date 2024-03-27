#include<stdio.h>
int main()
{
	char a='@';
	char *p;
	p=&a;
	printf("%c\n",a);
	printf("%c\n",*p);
	return 0;
}
