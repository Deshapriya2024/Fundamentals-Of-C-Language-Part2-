//insertion at first position
#include<stdio.h>
int main()
{
	int a[7]={10,20,10,30,40,50},i,pose=0,ele=999;
	for(i=5;i>=pose;i--)
	{
		a[i+1]=a[i];
	}
	a[pose]=ele;
	
	for(i=0;i<7;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
