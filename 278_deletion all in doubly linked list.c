// DOUBLY ALL DELETIONS 
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	struct node *prev;
	int data;
	struct node *next;
}db;
db *head=NULL;

void inbegin(int val){
	db *newnode;
	newnode=(db*)malloc(sizeof(db));
	newnode->data=val;
	if(head == NULL){
		newnode->prev=NULL;
		newnode->next=NULL;
		head=newnode;
	}
	else{
		newnode->prev=NULL;
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	printf("%d is inserted at first \n",val);	
}
void delfirst(){

if(head==NULL){
		printf("Linked List is Empty...\n");
	}
	else if(head->next==NULL){
		printf("%d deleted \n",head->data);
		free(head);
		head=NULL;
}
	else {
		db *temp=head;
		head=head->next;
		head->prev=temp->next=NULL;
		printf("%d deleted from first\n",temp->data);
		free(temp);
	}
}
void delend(){
	if(head==NULL){
		printf("Linked List \n");
	}
	else{
		db *temp=head;
		int i=0;
		while(temp->next!=NULL){
			temp=temp->next;
			i++;
		}
		if(i==0){
			printf("%d deleted\n",head->data);
			free(head);
			head=NULL;
		}
		else{
			printf("%d deleted from end\n",temp->data);
			temp->prev->next=NULL;
			free(temp);
		}
	}
}

void delspecific(int pos){
	if(head==NULL){
		printf("Linked List is Empty\n");
	}
	else if(head->next==NULL){
		delfirst();
	}
	else{int i=0;
		db *temp=head;
		for(i=1;i<pos;i++){
			temp=temp->next;
		}
		if(temp->next==NULL){
			temp->prev->next=temp->next;
			printf("%d deleted\n",temp->data);
			free(temp);
		}
		else{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			printf("%d deleted  from spesific position\n",temp->data);
			free(temp);
		}
		
	}
}


int main(){
	inbegin(10);
	inbegin(20);
	inbegin(30);
	inbegin(40);
	inbegin(50);
//	delfirst();	
    delspecific(2);
//	delend();
	return 0;
}
