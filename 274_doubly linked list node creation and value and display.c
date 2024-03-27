#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;
int main()
{
	//create struc node pr variable
	struct node *first,*middle,*last;
	
	//memory allocation
	first=(struct node*)malloc(sizeof(struct node));
	middle=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));
	//data assign
	first->data=10;
	middle->data=20;
	last->data=30;
	
	//linking nodes
	first->prev=NULL;
	first->next=middle;
	
	middle->prev=first;
	middle->next=last;
	
	last->prev=middle;
	last->next=NULL;
	
	//display forward
	
//	struct node *temp=first;
//  printf("forward directtion");
//	while(temp->next!=NULL){
//		printf("%d\n",temp->data);
//		temp=temp->next;
//	}


     //display backward
     struct node *temp=last;
	
	printf("Backword Direction\n");
	while(temp!=NULL){
		printf("%d \n",temp->data);
		temp=temp->prev;
	}

	
	
	
	return 0;
}
