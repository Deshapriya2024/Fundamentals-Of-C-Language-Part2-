#include<stdio.h>
void fun(char *ch)
{
	*ch='i';
}
int main()
{
	char ch='h';
	fun(&ch);
	if(ch=='h')
	{
		printf("....");
	}
	else{
		printf("hello");
	}
	
	return 0;
}
