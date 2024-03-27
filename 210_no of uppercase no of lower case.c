//enter your name calculate number of uppcase and number of lower case 
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]="";
	int i,nou=0,nol=0;
	printf("Enter your name max size is  99 \n");
	gets(name);

	
	for(i=0;name[i]!='\0';i++){
		if(name[i]>=65 && name[i]<=91){
			nou++;
		}
		else{
			nol++;
		}
	}
	
	
	printf("Number of upper case is %d\n",nou);
	printf("Number of lower case is %d\n",nol);
	
	return 0;
}

