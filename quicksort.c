#include<stdio.h>
// prototype
void quickSort(int [],int,int);
int partition(int [],int,int);
// body part of quickSort()
void quickSort(int arr[],int start,int end){
	if(start<end){
		int pIndex=partition(arr,start,end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}
//body part of partition() 
int partition(int arr[],int start,int end){
	int i=start;
	int pIndex=start;
	int pivot=arr[end];
	int temp;
	
	// cond checking and swapping in between Pindex and i
	for(i=start;i<end;i++){
		if(arr[i]<pivot){
			temp=arr[pIndex];
			arr[pIndex]=arr[i];
			arr[i]=temp;
			pIndex++;
		}
	}
	// store pivot at eaxct location 
	// swap in between pIndex and end
	temp=arr[pIndex];
	arr[pIndex]=arr[end];
	arr[end]=temp;
	return pIndex;
}

int main()
{
	int arr[10]={10,30,33,55,76,87,90,98,99,36},i;
	printf("before sorting\n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	quickSort(arr,0,9);
	printf("\n after sorting\n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
