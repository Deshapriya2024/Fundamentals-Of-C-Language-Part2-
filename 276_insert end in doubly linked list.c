#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;

//insert at begin
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

//insert at end
void insertEnd(int val){
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	//check is empty or not 
	if(head==NULL){
		insertBeg(val);
	}
	else{
		struct node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
		newNode->next=NULL;	
		printf("%d inserted successfully at the end\n",val);
	}
}


int main()
{
    insertEnd(20);
    insertEnd(25);
	return 0;
}
