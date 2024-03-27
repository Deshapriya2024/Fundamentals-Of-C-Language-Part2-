//assigning the values using pointer in a structure
#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[30];
	float sal;
};
struct employee e;
struct employee *ptr=&e;
int main()
{
	ptr->id=101;
    strcpy(	ptr->name,"rahul");
    ptr->sal=32000;
	printf("***emp details***\n");
	printf("id=%d\n",ptr->id);
	printf("name=%s\n",ptr->name);
	printf("salary=%f\n",ptr->sal);
	
	
	
	return 0;
}
