//without using loop find mid node
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}sn;
sn *head=NULL;

//INSERT AT BEGINING
void inbegin(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	
	if(head==NULL){
	newnode->next=NULL;
	head=newnode;
 }
else{
	newnode->next=head;
	head=newnode;
	
}
printf("%d inserted at first\n",val);
}

// DISPLAY PURPOSE

void dis(){
	sn *temp;
	temp=head;
	printf("\nTHE VALUES ARE:\n");
	while(temp!=NULL){
	printf("%d\t",temp->data);
	temp=temp->next;
	}
}

//find the middle node of this linked list
void getMiddleNode(){
	struct node *slow ,*fast;
	slow=fast=head;
	//check lined list is empty or not
	if(head==NULL){
		printf("Linked List is Empty\n");
	}
	else{
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		printf("\nModdle node value is %d\n",slow->data);
	}
}


int main()
{
	inbegin(50);
 	inbegin(40);
 	inbegin(30);
 	inbegin(20);
 	inbegin(10);
 	dis();
    getMiddleNode();
	return 0;
}

