//array of structute
#include<stdio.h>
#include<string.h>
typedef struct student{
	int roll_num;
	char name[20];
	int mob;
}emp;
emp e[10];  //structure variable creation
int main()
{
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("****ENTER STUDENT DETAILS****\n");
		printf("ENTER STUDENT ROLL NUMBER\n");
		scanf("%d",&e[i].roll_num);
		printf("ENTER STUDENT NAME\n");
		fflush(stdin);
		gets(e[i].name);
		printf("ENTER STUDENT MOBILE NUMBER\n");
		scanf("%d",&e[i].mob);
		
	}
	for(i=0;i<3;i++)
	{
		printf("***DISPLAY STUDENT DETAILS***\n");
		printf("%d\n",e[i].roll_num);
		printf("%s\n",e[i].name);
		printf("%d\n",e[i].mob);
	}
	return 0;
}

