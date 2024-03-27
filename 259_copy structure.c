//create a structure and two structure variable then assigning value to first 
//structure variable then copy all to second structure variable and display both.
#include<stdio.h>
#include<string.h>
typedef struct student{
	int roll_num;
	char name[30];
	int mob;
}emp;
emp e1;
emp e2;  //structure variable creation
int main()
{
		printf("****ENTER STUDENT DETAILS****\n");
		printf("ENTER STUDENT ROLL NUMBER\n");
		scanf("%d",&e1.roll_num);
		printf("ENTER STUDENT NAME\n");
		fflush(stdin);
		gets(e1.name);
		printf("ENTER STUDENT MOBILE NUMBER\n");
		scanf("%d",&e1.mob);
		
		//for display original data
		printf("***DISPLAY STUDENT DETAILS(input)***\n");
		printf("%d\n",e1.roll_num);
		printf("%s\n",e1.name);
		printf("%d\n",e1.mob);
		
		e2=e1;
	
		//for display copied data
		printf("***DISPLAY STUDENT DETAILS(copied)***\n");
		printf("%d\n",e2.roll_num);
		printf("%s\n",e2.name);
		printf("%d\n",e2.mob);
		
	
	return 0;
}
