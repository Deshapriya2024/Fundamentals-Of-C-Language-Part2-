// optimized bubble sort
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,5,4},i,j,temp;
	for(i=0;i<4;i++)
	{
		int check=0;
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				check=1;
			}
		}
	}
	printf("\nAfter sorting :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}	
	return 0;
}
