//box pattern 
//print X 
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(a==1 && i==5 || a==2 && i==4 || a==4 && i==2 || a==5 && i==1){
			  printf("*");	
			}
			else if(i==a){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
