//funtion programm
//calculate average mark of a student by using WAWR
#include<stdio.h>
int avg(int phy,int chem,int math,int bio,int it,int eng)
{
	int totalmark,avgmark;
	totalmark=phy+chem+math+bio+it+eng;
	avgmark=totalmark/6;
	return avgmark;
}
int main()
{
	int result;
    result=avg(60,60,60,60,60,60);
	printf("avg mark of a student is %d",result);
	return 0;
}
