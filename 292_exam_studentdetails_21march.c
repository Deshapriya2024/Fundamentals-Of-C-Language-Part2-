#include<stdio.h>
#include<stdlib.h>
typedef struct details{
	char name[30];
	char add[100];
	char course[100];
} dp;
int check(int num,int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		if(num==arr[i])
		return 1;
	}
	return 0;
}
int main()
{
	int n,i;
	printf("Enter the number of entries : ");
	scanf("%d",&n);
	int roll[n];
	for(i=0;i<n;i++){
		printf("Roll No. for Std-%d : ",i+1);
		scanf("%d",&roll[i]);
		if(check(roll[i],roll,i)){
			printf("Roll already exists...\nEnter Again ... Roll No. for Std-%d : ",i+1);
			scanf("%d",&roll[i]);
		}
	}
	dp d[n];
	for(i=0;i<n;i++){
		printf("Enter the Name for Roll No.-%d : ",roll[i]);
		scanf("%s",&d[i].name);
	}printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the Address for Roll No.-%d : ",roll[i]);
		scanf("%s",&d[i].add);
	}printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the Course for Roll No.-%d : ",roll[i]);
		scanf("%s",&d[i].course);
	}printf("\n");
	return 0;
}
