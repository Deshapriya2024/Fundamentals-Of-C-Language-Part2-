//individually assign value and access
//------------------------------------
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
	obj.roll=55;
	// assign string valu to structure
	strcpy(obj.name,"Rahul");
	strcpy(obj.course,"Btech");
	
	printf("***Student Information1****\n");
	printf("Roll Number is %d\n",obj.roll);
	printf("Name  is %s\n",obj.name);
	printf("Course  is %s\n",obj.course);
	
	
	return 0;
}

