#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}sn;
sn *head=NULL;
void inend(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	
	if(head==NULL){
	head=newnode;
 }
else{
	struct node *temp=head;
	while(temp->next!=NULL){
	temp=temp->next;	
}
temp->next=newnode;
}
printf("%d is inserted at end\n",val);
}
void delspeci(int val){
	struct node *temp=head,*help=head;
	while(temp->data!=val){
		temp=temp->next;
	}
	while(help!=temp){
		help=help->next;	
	}
	help->next=temp->next;
	temp->next=NULL;
	printf("%d is deleted",val);
	
	free(temp);
}

int main(){
	inend(40);
	inend(30);
	inend(20);
	inend(10);

	delspeci(20);

	return 0;
}
