//matrix addition using recurssion scanf
#include<stdio.h>
int i=0,j=0;
void display(int dis[3][3]);
void input(int arr[3][3]);
int add(int arr1[3][3],int arr2[3][3],int sum[3][3],int a,int b);
int main()
{
	int a[3][3],b[3][3],c[3][3];
	printf("Enter the Elements for first Matrix\n");
	input(a);
	display(a);
	printf("\nEnter the Elements for second Matrix\n");
	input(b);
	display(b);
	printf("\nThe addition of matrix-1 & matrix-2 is :\n");
	i=0;j=0;
	add(a,b,c,i,j);
	display(c);
	return 0;
}
void display(int dis[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",dis[i][j]);
		}
		printf("\n");
	}
}
void input(int arr[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Element No.-(%d,%d) : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
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
