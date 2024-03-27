#include<stdio.h>
int main()
{
	int m,n,o,i,k=0;
	printf("Enter the size of first array : ");
	scanf("%d",&m);
	printf("Enter the size of second array : ");
	scanf("%d",&n);
	o=m+n;
	int a[m],b[n],c[o];
	printf("Enter the values for first array :\n");
	for(i=0;i<m;i++)
	{
		printf("Enter the value for Element no.-%d : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the values for Second array :\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the value for Element no.-%d : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<o;i++)
	{
		if(i<m)
		{c[i]=a[i];}
		if(i>=m)
		{
			c[i]=b[k];
			k++;
		}
	}
	//Printing the merged array
	printf("\nThe Merged array is as follows :\n");
	for(i=0;i<o;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
