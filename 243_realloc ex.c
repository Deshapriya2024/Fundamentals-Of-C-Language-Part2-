#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n,ns;
	printf("Enter the size:\n");
	scanf("%d",&n);
	//memory creation
	ptr=(int*)malloc(n*sizeof(int));
	
	//NULl check operation
	if(ptr!=NULL)
	{
		printf("\nmemory allocated sucessfully\n");
	}
	//display address
	printf("\ninitially the allocated memory address\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr+i);
	}
	
	printf("Enter the size:\n");
	scanf("%d",&ns);
	//realoocte the memory
	ptr=realloc(ptr,ns*sizeof(int));
	
		//NULl check operation
	if(ptr!=NULL)
	{
		printf("\nmemory allocated sucessfully\n");
	}
	//display address
	printf("\nAfter resize the allocated memory address\n");
	for(i=0;i<ns;i++)
	{
		printf("%d\n",ptr+i);
	}
	return 0;
}
