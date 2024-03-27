#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBeg(int val)
{
	//create a new node 
	struct node *newNode;
	newNode= malloc(sizeof(struct node));

	//assign value 
	newNode->data=val;
	
	//check linked list empty or not 
	
	if(head==NULL){
		newNode->next=NULL;
		newNode->prev=NULL;
		head=newNode;
	}
     else{
		newNode->prev=NULL;
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
printf("%d insert success at beg\n",val);
	
}

int main()
{
    insertBeg(10);
    insertBeg(20);
    insertBeg(30);
    insertBeg(40);
    insertBeg(50);
    insertBeg(60);
	return 0;
}
