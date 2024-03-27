//input name and count vowel and cosonant
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]="";
	int i,nov=0,noc;
	printf("Enter your name max size is  99 \n");
	gets(name);

	
	for(i=0;name[i]!='\0';i++){
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
			nov++;
		}
		else{
			noc++;
		}
	}
	
	
	printf("Number of vowel is %d\n",nov);
	printf("Number of const... is %d\n",noc);
	
	return 0;
}




