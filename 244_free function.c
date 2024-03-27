#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n,ns;
	printf("Enter the size:\n");
	scanf("%d",&n);
	//memory creation
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){printf("%d\n",ptr+i);}
	printf("Enter the size:\n");
	scanf("%d",&ns);
	//realoocte the memory
	ptr=realloc(ptr,ns*sizeof(int));
	for(i=0;i<ns;i++){printf("%d\n",ptr+i);}
	free(ptr);//to avoid memory leakage
	printf("success");
	return 0;
}
