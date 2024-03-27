#include<stdio.h>
float B(float salary,char gender);
float EB(float salary);
int main()
{
	float salary,bonus,extbonus;char gen;
	printf("Enter your Salary : ");
	scanf("%f",&salary);getchar();
	printf("Enter you gender (m for Male & f for Female) : ");
	scanf("%c",&gen);getchar();
	bonus=B(salary,gen);
	if(salary<=50000)
	extbonus=EB(salary);
	//Display
	printf("Your salary amount was %.2f\n",salary);
	printf("Your Bonus amount is %.2f\n",bonus);
	if(salary<=50000)
	printf("Your extra bonus is %.2f\n",extbonus);
	printf("\nYour Total salary amount is %.2f",salary+bonus+extbonus);
	return 0;
}
float B(float salary,char gender)
{
	if(gender=='m' || gender=='M')
	return (salary*0.09);
	if(gender=='f' || gender=='F')
	return (salary*0.17);
}
float EB(float salary)
{
	if(salary<=20000);
	return (salary*0.05);
	if(salary>20000 && salary<=50000)
	return (salary*0.025);
}
