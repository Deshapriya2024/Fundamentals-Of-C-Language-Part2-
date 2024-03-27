//deletion in circular linked list using single linked list
#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node *next;
 };
 struct node *head=NULL;
 //insert at begin
 
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

//delete at begin
 void deletebegin()
 {
 	if(head==NULL)
 	{
 	printf("linked list is empty....\n");
	 }
	 else if(head->next==head){
	 	printf("%d deleted\n",head->data);
	 	free(head);
	 	head->next=NULL;
	 }
	 else{
	 	struct node *temp=head,*help=head;
	 	while(help->next!=head){
	 		help=help->next;
		 }
		 head=head->next;
		 help->next=head;
		 printf("%d deleted from end\n",temp->data);
		 free(temp);
	 	
	 }
 }
 void deleteend(){
 	if(head==NULL)
 	{
 	printf("linked list is empty....\n");
	 }
	 else if(head->next==head){
	 	printf("%d deleted\n",head->data);
	 	free(head);
	 	head->next=NULL;
	 }
	 else{
	 	struct node *temp=head,*help=head;
	 	while(temp->next!=head){
	 		temp=temp->next;
		 }
		 while(help->next!=temp){
		 	help=help->next;
		 }
		 help->next=head;
		 printf("%d deleted from end..\n",temp->data);
		 free(temp);
		 temp->next=NULL;
	 }
 	
 }
 void deletespesific( int pos){
 		if(head==NULL)
 	{
 	printf("linked list is empty....\n");
	 }
	 else if(head->next==head){
	 	printf("%d deleted\n",head->data);
	 	free(head);
	 	head->next=NULL;
	 }
	 else{
	 	struct node *temp=head,*help=head;
	 	int i;
	 	for(i=0;i<pos;i++){
	 		temp=temp->next;
		 }
		 while(help->next!=temp){
		 	help=help->next;
		 }
		 help->next=temp->next;
		 printf("%d deleted from pos %d..\n",temp->data,pos);
		 free(temp);
		 temp->next=NULL;
	 }
 	
 }
 //display
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
 	display();
// 	deletebegin();
//    deleteend();
    deletespesific(1);
 	display();
 	
 	
 	return 0;
 }
