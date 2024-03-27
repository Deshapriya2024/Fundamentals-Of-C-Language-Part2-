#include<stdio.h>
int main()
{
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int a[4][1],b[1][4],c[4][1],d[1][4],i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==0)
			{a[j][0]=arr[i][j];}
			else if(i==1)
			{b[0][j]=arr[i][j];}
			else if(i==2)
			{c[j][0]=arr[i][j];}
			else if(i==3)
			{d[0][j]=arr[i][j];}
		}
	}
	printf("The values in first block are :\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i][0]);
	}
	printf("\nThe values in second block are :\n");
	for(i=0;i<4;i++)
	{
		printf("%d  ",b[0][i]);
	}
	printf("\nThe values in third block are :\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",c[i][0]);
	}
	printf("\nThe values in forth block are :\n");
	for(i=0;i<4;i++)
	{
		printf("%d  ",d[0][i]);
	}
	return 0;
}
