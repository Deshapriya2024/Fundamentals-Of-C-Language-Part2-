//one note creation and assigning vallue
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->next=NULL;
	printf("%d",head->data);
	
	return 0;
}
