//EX-2
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
	fun(5);
	return 0;
}

