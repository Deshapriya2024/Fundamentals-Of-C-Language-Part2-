//NON-TAIL RECURSION
#include<stdio.h>
void fun(int n){
	if(n==0)
		{
		return;
	    }
	fun(n-1);
	printf("%d\n",n); 
}
int main()
{
	fun(5);
	return 0;
}

