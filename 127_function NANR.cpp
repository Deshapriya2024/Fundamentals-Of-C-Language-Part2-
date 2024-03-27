//function
//find our factorial of a number by using NANR
#include<stdio.h>
void fact()
{
	int num=4,fact=1;
	while(num!=0){
		fact=num*fact;
		num--;
	}
	printf("factorial of a number is %d",fact);	
} 
int main()
{
	fact();
	return 0;
}
