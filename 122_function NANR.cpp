//funtion programm
//calculate average mark of a student by using NANR
#include<stdio.h>
void avg()
{
	int phy=60,chem=60,math=60,bio=60,it=60,eng=60,totalmark,avgmark;
	totalmark=phy+chem+math+bio+it+eng;
	avgmark=totalmark/6;
	printf("avgmark of a student is %d",avgmark);
}
int main()
{
	avg();
	return 0;
}
