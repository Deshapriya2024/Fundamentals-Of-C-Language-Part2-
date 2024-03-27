//ADDITION OF TWO 3D MATRIX
#include<stdio.h>
int main()
{
		int a[2][3][3]={{{10,20,30},{40,50,60},{70,80,90}},{{1,2,3},{4,5,6},{7,8,9}}};
		int b[2][3][3]={{{21,22,23},{24,25,26},{27,28,29}},{{30,31,32},{33,34,35},{36,37,38}}};
		int c[2][3][3];
		int i,j,k;
		
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					c[i][j][k]=a[i][j][k]+b[i][j][k];
				}
			}
		}
		
		printf("matrix a:--\n");
			for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("matrix b:--\n");
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",b[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
		
		printf("AFTER ADDITION MATRIX a AND b\n");
     	printf("---------------------------------\n");
		
			for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",c[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
		
	     
	return 0;
}
