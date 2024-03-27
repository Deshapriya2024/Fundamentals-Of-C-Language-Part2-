//Q-WAP USING STRUCTURE TAKE 3 INT VARIABLE AND FIND THE GREATEST ONE
#include<stdio.h>
struct great{
	int a,b,c;
			
};
struct great gt;
int main(){
	printf("enter 1st num\n");
	scanf("%d",&gt.a);
	printf("enter 2nd num\n");
	scanf("%d",&gt.b);
	printf("enter 3rd num\n");
	scanf("%d",&gt.c);
	
	if(gt.a>gt.b && gt.a>gt.c){
		printf("%d is greater\n",gt.a);
	}
	else if(gt.b>gt.c && gt.b<gt.a){
		printf("%d is greater\n",gt.b);
	}
	else{
		printf("%d is greater\n",gt.c);
	}
	
	return 0;
}
