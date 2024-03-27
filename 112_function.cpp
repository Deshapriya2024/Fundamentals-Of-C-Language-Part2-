//funtion programm
#include<stdio.h>
void add(int a ,int b ,int c)
{
	int sum;
	sum=a+b+c;
	printf("%d\n",sum);
}
int main()
{
    int i;
    for(i=1;i<=5;i++){
    	add(i,i,i);
	}
	return 0;
}
