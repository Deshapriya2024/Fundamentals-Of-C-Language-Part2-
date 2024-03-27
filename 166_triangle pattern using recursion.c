/*CLASS WORK -- programm 2
   1
  11
 111
1111
*/
#include<stdio.h>
int space(int num);
int print(int num);
int newline(int n);
int n=4,o=3,f=0;
int main()
{
	space(o);
	return 0;
}
int space(int num)
{
	if(num>0)
	{
		printf(" ");
		return space(num-1);
	}
	if(num==0)
	{
		print(f+1);
	}
	else
	return;
}
int print(int num)
{
	if(num>0 && num<=n)
	{
		printf("*");
		return print(num-1);
	}
	if(num==0)
	{
		newline(n);
	}
	else
	return;
}
int newline(int n)
{
	if(n!=0)
	{printf("\n");
	space(n-f++ -2);}
	else
	return;
}

