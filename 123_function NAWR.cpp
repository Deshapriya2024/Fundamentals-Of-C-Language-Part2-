//funtion programm
//calculate average mark of a student by using NAWR
#include<stdio.h>
int avg()
{
	int phy=60,chem=60,math=60,bio=60,it=60,eng=60,totalmark,avgmark;
	totalmark=phy+chem+math+bio+it+eng;
	avgmark=totalmark/6;
    return avgmark;
}
int main()
{
	int result;
	result=avg();
	printf("avg mark of a student is %d",result);
	return 0;
}
