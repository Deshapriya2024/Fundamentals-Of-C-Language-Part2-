//alphabet pattern programming
/*
A B C D
A B C D
A B C D
A B C D
A B C D
*/
#include<stdio.h>
int main()
{
	int i;
	char j;
	for(i=0;i<5;i++)
	{
		for(j='A';j<'E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}
