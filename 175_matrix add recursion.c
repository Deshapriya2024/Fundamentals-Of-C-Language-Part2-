//Addition of 3*3 matrix using recursion ...
#include<stdio.h>
int i=0,j=0;
int add(int arr1[3][3],int arr2[3][3],int sum[3][3],int a,int b)
{
	if(b==3)
	{
		i++;
		return add(arr1,arr2,sum,i,j);
	}
	if(a==3)
	return;
	if(b<3)
	{
	sum[a][b]=arr1[a][b]+arr2[a][b];
	return add(arr1,arr2,sum,a,b+1);
	}
}
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={9,8,7,6,5,4,3,2,1},c[3][3];
	add(a,b,c,i,j);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
