#include<stdio.h>
int main()
{
	int a=23;
	int *i,**j,***k;
	i=&a;
	j=&i;
	k=&j;
	
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",i);
	printf("%u\n",&j);
	printf("%u\n",k);
	printf("%u\n",&k);
	
	printf("%u\n",*i);
	printf("%u\n",**j);
	printf("%u\n",***k);
	
	printf("%u\n",*j);
	printf("%u\n",*k);
	printf("%u\n",**k);
	
	printf("%u\n",*(&j));
	printf("%u\n",*(&k));
	printf("%u\n",**(&k));
	
//	printf("%u\n",*a);
//	printf("%u\n",**i);
//	printf("%u\n",&&j);
	return 0;
}
