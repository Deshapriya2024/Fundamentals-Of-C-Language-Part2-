#include<stdio.h>
void pattern(n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
int main(){
int n;
scanf("%d",&n);
pattern(n);
return 0;
}
