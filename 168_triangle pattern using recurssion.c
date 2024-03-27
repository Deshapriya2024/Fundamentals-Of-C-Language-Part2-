/*CLASS WORK -- programm 4
1111
111
11
1
*/
#include<stdio.h>
int num=4;
int sub=0;
int print(int n)
{
	if(n==0)
	return newline(num-1);
	if(n>0)
	{
		printf("* ");
		return print(n-1);
	}
}
int newline(int num)
{
	if(num>0)
	{
	printf("\n");
	return print(num-sub++);
	}
	return;
}
int main()
{
	print(4);
	return 0;
}
