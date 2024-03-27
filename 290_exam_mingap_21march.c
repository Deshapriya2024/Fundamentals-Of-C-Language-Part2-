#include<stdio.h>
#include<stdlib.h>
int minimum_gap(int arr[],int size){
	int gap=arr[1]-arr[0],i;
	for(i=2;i<size;i++){
		if(gap>=abs(arr[i]-arr[i-1]))
			gap=abs(arr[i]-arr[i-1]);
	}
	return gap;
}
int main(){
	int arr[]={100,999,223,339,786,694,916,297},number;
	printf("The minimum gap within the array is %d\n",minimum_gap(arr,8));
	return 0;
}
