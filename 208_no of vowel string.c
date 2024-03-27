// count the number of vowels

#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]="";
	int i,nov=0;
	printf("Enter your name max size is  99 \n");
	gets(name);

	
	for(i=0;name[i]!='\0';i++){
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
			nov++;
		}
	}
	
	
	printf("Number of vowel is %d",nov);
	
	return 0;
}
