//Array Operations(cont.) 
//1.Traversal
//Qn : Input 5 student mark and display it using array 
#include<stdio.h>
int main()
{
	int mark[5],i;
	printf("enter 5 student avg mark\n");
	for(i=0;i<5;i++){
		printf("enter the mark of %d student\n",i+1);
		scanf("%d",&mark[i]);
	}
	printf("---------------\n");
	for(i=0;i<5;i++){
		printf("Mark of %d student is %d\n",i+1,mark[i]);
	}
	return 0;
}


