#include<stdio.h>
struct employee{
	int id;
	char name[20];
	struct department{
	char desg[20];
	float sal;	
	}d;
	
}e;
int main()
{
	printf("Enter employee id\n");
	scanf("%d",&e.id);
	printf("Enter employee name\n");
	fflush(stdin);
	gets(e.name);
	printf("Enter employee designation\n");
	fflush(stdin);
	gets(e.d.desg);
	printf("Enter employee salary\n");
	scanf("%f",&e.d.sal);
	
	printf("********EMPLOYEE DETAILS*********");
	printf("Employee id is:%d\n",e.id);
	printf("Employee name is:%s\n",e.name);
	printf("Employee designation is:%s\n",e.d.desg);
	printf("Employee salary is:%f\n",e.d.sal);
	return 0;
}
