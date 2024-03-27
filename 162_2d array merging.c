#include<stdio.h>
int main()
{
	int i,j,k=0;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},
	b[3][3]={{11,12,13},{14,15,16},{17,18,19}},
	c[3][3]={{21,22,23},{24,25,26},{27,28,29}},d[9][9];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[0][k]=a[i][j];
			k++;
		}
	}k=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[1][k]=b[i][j];
			k++;
		}
	}k=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[2][k]=c[i][j];
			k++;
		}
	}
	printf("After merging :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<9;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
