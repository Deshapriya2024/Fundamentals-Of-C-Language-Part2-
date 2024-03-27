#include<stdio.h>
int number(int num)
{
	int result;
	if(num==1){
		printf("%d",num);
	}
	else
	{
		printf("%d\n",num);
		return number(num-1);
	}
	
}
int main()
{
    number(10);
    return 0;
}
