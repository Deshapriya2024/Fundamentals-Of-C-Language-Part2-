//typedef
//#include<stdio.h>
//#include<string.h>
//struct employee{
//	int id;
//	char name[30];
//	float sal;
//};
//
//int main()
//{
//here is the problem is large name we have to write every time
//struct employee e;
//struct employee e1;	
//struct employee e2;
//struct employee e3;
//struct employee e4;
//return 0;
//}

//sollution is typedef .
#include<stdio.h>
#include<string.h>
typedef struct employee{
	int id;
	char nme[20];
	float sal;
}emp;
	//solution is typedef
emp e;
emp e1;
emp e2;
emp e3;
emp e4;

	//problem with above code and sollution is array of structure
	//emp[5];
	
int main()
{

	printf("%u\n",&e);
	printf("%u\n",&e1);
	printf("%u\n",&e2);
	printf("%u\n",&e3);
	printf("%u\n",&e4);
	

	return 0;
}


