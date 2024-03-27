/*
find out the missing value in the given series , take Dynamic input (scan f)
10 11 12 13 14  16 17 18 19 20
*/
#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter the number of elements you want to input : ");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the Elements for finding missing value\n");
	for(i=0;i<a;i++)
	{
		printf("Enter Element No.-%d : ",i+1);
		scanf("%d",&arr[i]);
		getchar();
	}
	printf("");
	for(i=0;i<a;i++)
	{
		if(i>0 && (arr[i-1])+1 != arr[i])
		{
		printf("\nThe Missing value is %d",arr[i-1] + 1);
		break;	
		}
	}
	return 0;
}
