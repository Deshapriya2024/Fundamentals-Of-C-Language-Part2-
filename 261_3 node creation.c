// creation of node
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *head,*middle,*last,*temp;
	head=(struct node*)malloc(sizeof(struct node));
	middle=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));
	
	// assigning value 
	head->data=10;
	middle->data=20;
	last->data=30;
	
	// linking of nodes 
	head->next=middle;
	middle->next=last;
	last->next=NULL;
	
	// print data part of nodes 
	
//	printf("%d\n",head->data);
//	printf("%d\n",middle->data);
//	printf("%d\n",last->data);
	
	// other way of printing 
	
	temp=head;
	
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	
	return 0;
}
