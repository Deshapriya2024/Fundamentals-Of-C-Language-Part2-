//triangle pattern 
#include<stdio.h>
int main()
{
	int i,a,s;
	for(a=1;a<=4;a++){
		for(s=1;s<=a;s++){
			printf(" ");
		}
		for(i=5;i>=a;i--){
			printf("*");
		}
		printf("\n");
	}
	
    for(a=1;a<=5;a++){
    	for(s=5;s>=a;s--){
    		printf(" ");
		}
		for(i=1;i<=a;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
