//EX-3
#include<stdio.h>
int fun(int n){
printf("%d\n",n);
	if(n==0)
	{
	return n;
    }
 return fun(n-1);
}
int main()
{
	int result;
	result=fun(5);
	printf("%d",result);
	return 0;
}
