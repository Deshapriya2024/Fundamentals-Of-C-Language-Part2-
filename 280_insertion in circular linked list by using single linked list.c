//insertion in circular linked list using single linked list 
#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int data;
	struct node *next;
};
struct node *head=NULL;

// body part for insertion at begin
void insertbegin(int val){
	//node creation
    struct node *newnode;
    //memory allocation
    newnode=(struct node*)malloc(sizeof(struct node));
    
    //data sing
    newnode->data=val;
     if(head==NULL)
     {
     	newnode->next=newnode;
     	head=newnode;
	 }
	 else{
	 	struct node *temp=head;
	 	while(temp->next!=head)
	 	temp=temp->next;
	 	newnode->next=head;
	 	temp->next=newnode;
	 	head=newnode;
	 
	 }
	 	printf("%d inserted successfully at begin\n",newnode->data);
    
	
}
void insertend(int val){
		//node creation
    struct node *newnode;
    //memory allocation
    newnode=(struct node*)malloc(sizeof(struct node));
    
    //data sing
    newnode->data=val;
     if(head==NULL)
     {
         insertbegin(val);
	 }
	 else{
	 	struct node *temp=head;
	 	while(temp->next!=head)
	 	temp=temp->next;
	 	newnode->next=head;
	 	temp->next=newnode;
	 	printf("%d inserted successfully at end\n",newnode->data);
	 }
    
	
}
void insertspecific(int val,int pos)
{
	//node creation
    struct node *newnode;
    //memory allocation
    newnode=(struct node*)malloc(sizeof(struct node));
    
    //data sing
    newnode->data=val;
     if(head==NULL){
     	insertbegin(val);
	 }
	 else if(head->next==head){
	 	insertend(val);
	 }
	 else{
	 	struct node *temp=head;
	  int i;
	  for(i=0;i<pos-1;i++){
	  	temp=temp->next;
	  }
	  newnode->next=temp->next;
	  temp->next=newnode;
	  printf("%d inserted at pos %d\n",newnode->data,pos);
	 	
	 }
	
}


void display()
{
		struct node *temp=head;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
		
	}while(temp!=head);
	printf("\n");
}
int main()
{
	insertbegin(10);
	insertbegin(20);
	insertbegin(30);
	insertend(999);
	insertspecific(888,2);
    display();
	
	
	return 0;
}
