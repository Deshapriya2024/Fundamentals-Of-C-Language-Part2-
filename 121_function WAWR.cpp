//FUNTION
//USER DEFINED FUNTION(4TYPES)
//FIND THE AREA OF A RECTANGLE BY USING WAWR
#include<stdio.h>
int mul(int l , int w)
{
	int area;
	area=l*w;
    return area;
}
int main()
{
	int result;
	result=mul(10,20);
	printf("AREA OF A RECTANGLE IS %d",result);
	return 0;
}
