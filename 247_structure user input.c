// take input from the use at run time and assign those value to structure variable 


#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[30];
	char course[20];
};
int main()
{
	struct student obj;
	printf("Enter your roll\n");
	scanf("%d",&obj.roll);
	printf("Enter Your name\n");
	scanf("%s",obj.name);
	printf("Enter Your Course\n");
	scanf("%s",obj.course);
	
	printf("***Student Information1****\n");
	printf("Roll Number is %d\n",obj.roll);
	printf("Name  is %s\n",obj.name);
	printf("Course  is %s\n",obj.course);
	
	
	return 0;
}
