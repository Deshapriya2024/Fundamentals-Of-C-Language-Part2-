#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int data;
	struct node *next;
};
struct node *head=NULL;
int main()
{
	struct node *fast,*middle,*last;
	fast=(struct node*)malloc(sizeof(struct node));
	middle=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));
	
	//value assign
	fast->data=10;
	middle->data=20;
	last->data=30;
	
	//linking nodes
	
	fast->next=middle;
	middle->next=last;
	last->next=fast;
	
	//display
	struct node *temp=fast;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
		
	}while(temp!=fast);
	return 0;
}
