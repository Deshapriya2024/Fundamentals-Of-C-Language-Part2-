//INDIRECT RECURSION
#include<stdio.h>
int odd();
int even();
int n=1;
int main()
{
	odd();
	return 0;
}
int odd(){
	if(n<=15){
		printf("%d\n",n*2);
		n++;
        even();
	}
	return 0;
}
int even(){
	if(n<=15){
		printf("%d\n",n*5);
		n++;
	 odd();
	}
	return 0;
}

