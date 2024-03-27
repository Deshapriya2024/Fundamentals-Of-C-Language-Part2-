//structure comparision
#include<stdio.h>
#include<string.h>
typedef struct employee{
	int id;
	char name[20];
	float sal;
}emp;
emp e;
emp e1;
int main()
{
	e.id=101;
	strcpy(e.name,"rahul");
	e.sal=32000;
	
	e1.id=102;
	strcpy(e1.name,"priyanka");
	e1.sal=42000;
	
	if(e.sal<e1.sal)
	{
		printf("e1 is greater than e.\n");
	}
	
	return 0;
}
