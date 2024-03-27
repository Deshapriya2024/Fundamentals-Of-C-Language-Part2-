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

//insert at specific
void insertSpecific(int val,int pos){
	int i;
	struct node *newNode,*temp=head;
	newNode=(struct node*)malloc(sizeof(struct node));
	
	newNode->data=val;
	
	//traverse untill postion 
	for(i=0;i<pos-1;i++){
		temp=temp->next;
	}
	
	temp->next->prev=newNode;
	newNode->next=temp->next;
	newNode->prev=temp;
	temp->next=newNode;
	
	printf("\n%d inserted at %d position successfully\n",val,pos);
}


int main()
{
    insertBeg(10);
    insertBeg(20);
    insertBeg(30);
    insertSpecific(999,2);
	return 0;
}
