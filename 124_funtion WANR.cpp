//funtion programm
//calculate average mark of a student by using WANR
#include<stdio.h>
void avg(int phy,int chem,int math,int bio,int it,int eng)
{
	int totalmark,avgmark;
	totalmark=phy+chem+math+bio+it+eng;
	avgmark=totalmark/6;
	printf("avg mark of a student is %d",avgmark);
}
int main()
{
	avg( 60,60,60,60,60,60);
	return 0;
}
