/*CLASS WORK -- programm 1
1
11
111
1111
*/
#include<stdio.h>
int fun(int n){
	if(n>0){
		fun(n-1); 
		printf("1");
	}
}
int num(int n){
	if(n>0){
		num(n-1);
	}
	fun(n);
	printf("\n");
}
int main(){
	num(4);
	return 0;
}
