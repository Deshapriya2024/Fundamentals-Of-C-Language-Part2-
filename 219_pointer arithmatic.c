#include<stdio.h>
int main()
{
	int i=23;
	int *ptr=&i;
	printf("%u\n",ptr);
	ptr--;
	printf("%u\n",ptr);
	return 0;
}
