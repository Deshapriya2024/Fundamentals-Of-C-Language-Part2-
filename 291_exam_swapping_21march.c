#include<stdio.h>
void hello(){
	int arr[5],brr[5],i;
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
		scanf("%d",&brr[i]);
	printf("Before swaps :\n");
	for(i=0;i<5;i++)
		printf("%d  %d\n",arr[i],brr[i]);
	printf("After operating ... :\n");
	for(i=0;i<5;i++)
		printf("%d  %d\n",arr[i],brr[4-i]);
}
int main(){
	hello();
	return 0;
}
