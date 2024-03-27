//accsing the address of all element of structure
#include<stdio.h>
struct employee{
	int id;
	char name[30];
	float sal;
};
struct employee e;
struct employee *ptr=&e;
int main()
{
	printf("***ADDRESS***\n");
	
	printf("%u\n",&e);
	printf("%u\n",ptr);
	return 0;
}
