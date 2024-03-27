//function
//find our factorial of a number by using NAWR
#include<stdio.h>
int fact()
{
	int num=4,fact=1;
	while(num!=0){
		fact=num*fact;
		num--;
	}
    return fact;	
} 
int main()
{
	int result;
	result=fact();
	printf("factorial of a number is %d",result);
	return 0;
}
