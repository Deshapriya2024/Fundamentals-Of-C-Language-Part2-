// at a time assign value to all members of structure
#include<stdio.h>
struct student{
	int roll;
	char name[30];
	char course[20];
};
int main()
{
	struct student obj={101,"Rahul","Btech"};
	
	printf("***Student Information1****\n");
	printf("Roll Number is %d\n",obj.roll);
	printf("Name  is %s\n",obj.name);
	printf("Course  is %s\n",obj.course);
	
	struct student obj1={102,"Priynaka","Mtech"};
	
	printf("***Student Information2****\n");
	printf("Roll Number is %d\n",obj1.roll);
	printf("Name  is %s\n",obj1.name);
	printf("Course  is %s\n",obj1.course);
	
	struct student obj2={103};
	
	printf("***Student Information3****\n");
	printf("Roll Number is %d\n",obj2.roll);
	printf("Name  is %s\n",obj2.name);
	printf("Course  is %s\n",obj2.course);
	
	struct student obj3={};
	
	printf("***Student Information4****\n");
	printf("Roll Number is %d\n",obj3.roll);
	printf("Name  is %s\n",obj3.name);
	printf("Course  is %s\n",obj3.course);
	return 0;
}

