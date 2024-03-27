// input your name and find out its length 
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]="";
	printf("Enter your name max size is  99 \n");
	gets(name);
	puts(name);
	printf("Size is %d",strlen(name));
	
	return 0;
}
