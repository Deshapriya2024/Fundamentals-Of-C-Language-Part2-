//selection sort
#include<stdio.h>
int main(){
	int a[5]={30,50,20,10,40},i,j,temp;
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	
	
	return 0;
}
