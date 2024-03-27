//accsing the address of all element of structure
#include<stdio.h>
struct employee{
	int id;
	char name[30];
	float sal;
};
struct employee e;
int main()
{
	printf("***ADDRESS***\n");
	
	printf("%u\n",&e);
	printf("%u\n",&e.id);
	printf("%u\n",&e.name);
	printf("%u\n",&e.sal);
	return 0;
}
