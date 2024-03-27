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
void dis(){
	sn *temp;
	temp=head;
	printf("\nTHE VALUES ARE:\n");
	while(temp!=NULL){
	printf("%d\t",temp->data);
	temp=temp->next;
	}
}
int main(){
	inend(10);
	inend(20);
	inend(30);
	dis();
	return 0;
}
