//triangle pattern
#include<stdio.h>
int main()
{
	int i,a,s;
	for(a=1;a<=5;a++){
		for(s=0;s<=a;s++){
			printf(" ");
		}
		for(i=5;i>=a;i--){
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
