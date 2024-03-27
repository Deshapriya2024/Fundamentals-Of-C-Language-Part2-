//Q-WAP USING STRUCTURE TAKE 2 POINTERS AND CALCULATE THE DISTANCE BETWEEN THEM
#include<stdio.h>
struct dist{
	int ptr,qtr;
};
	struct dist d;
int main(){

	int a=12;
	int b=18;
	d.ptr=&a;
	d.qtr=&b;
	printf("Address of a is %u\n",&a);
	printf("Address of b is %u\n",&b);
	printf("distance between them is %d bytes",(d.ptr-d.qtr));
	
	
	return 0;
}

