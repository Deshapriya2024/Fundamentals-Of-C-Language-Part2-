#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i;
	//memory craetion
	ptr=(int*)malloc(5*sizeof(int));
	ptr=realloc(ptr,2*sizeof(int));
	ptr=realloc(ptr,6*sizeof(int));
	
	return 0;
}
