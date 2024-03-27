//deletion at last position
#include<stdio.h>
int main()
{
	int a[5]={100,200,300,400,500},i,size;
	size--;
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
