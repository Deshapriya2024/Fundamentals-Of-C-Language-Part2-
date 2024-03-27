#include<stdio.h>
int main()
{
	int a[4]={10,20,30,40}, b[4]={50,60,70,80},c[8];
	int i,j=0;
	for(i=0;i<8;i++)
	{
		if(i<4)
		{
			c[i]=a[i];
		}
		if(i>=4)
		{
			c[i]=b[j];
			j++;
		}
	}
	//after merging
	for(i=0;i<8;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
