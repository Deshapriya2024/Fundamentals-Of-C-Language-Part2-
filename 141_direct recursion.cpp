//TYPPES OF RECURSION
//1. DIRECT RECURSION
//2.INDIRECT RECUSION
//3.TAIL RECURSION
//4.NON-TAIL RECURSION
//5.LINEAR AND TREE RECURSION
//
//=================================
// DIRECT RECURSION ---------EX-1
//=================================
//IF A FUNCTION CALLS THE SAME FUNCTION AGAIN IS CALLED AS DIRECT FUNCTION.
#include<stdio.h>
int fun(int n){
	if(n==0)
	{
	return n;
	}
 printf("%d\n",n);
 return fun(n-1);
}
int main()
{
	fun(5);
	return 0;
}

