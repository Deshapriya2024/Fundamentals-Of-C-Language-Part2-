//using calloc ()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i;
	//memory craetion
	ptr=(int*)calloc(5,sizeof(int));
	//null check operation
	if(ptr!=NULL)
	{
		printf("memory allocated successfully\n");
	}
	
	//assigning the value
	*(ptr+0)=10;
	*(ptr+1)=20;
	*(ptr+2)=30;
	*(ptr+3)=40;
	*(ptr+4)=50;
	
	//display value
	 for(i=0;i<5;i++)
	 {
	 	printf("%d\n",*(ptr+i));
	 }
	return 0;
}
