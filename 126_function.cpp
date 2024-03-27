//function
//how to find out factorial of a number without using function
#include<stdio.h>
int main()
{
	int num=4,fact=1;
	while(num!=0){
		fact=num*fact;
		num--;
	}
	printf("factorial of a number is %d",fact);
	return 0;
}
