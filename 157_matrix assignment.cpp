//ASSIGNMENT
//searching a element in matrix
#include<stdio.h>
int main()
{
	int a[3][3]={{10,11,12},{90,91,92},{71,72,73}} ,key=72,found=0;
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==key)
			{
				printf("key found");
			    found=1;
			}
			
		}
	}
	 if(found==0)
	 {
	 	printf("key not found");
	 }
	return 0;
}
