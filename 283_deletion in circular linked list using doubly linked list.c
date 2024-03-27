#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;

void insertbegin(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL){
		newnode->next=newnode->prev=newnode;
	}
	else{
		newnode->next=head;
		newnode->prev=head->prev;
		head->prev->next=newnode;
		head->prev=newnode;
	}
	head=newnode;
	printf("%d inserted successfully at begin...\n",head->data);
}

void deletebegin(){
	if(head==NULL)
		printf("Linked List is Empty..first try to insert something...\n");
	else if(head->next==head){
		printf("%d deleted successfully ...\n",head->data);
		free(head);
		head=NULL;
	}
	else{
		struct node *temp=head;
		head=head->next;
		temp->prev->next=head;
		head->prev=temp->prev;
		printf("%d deleted successfully from fast...\n",temp->data);
		free(temp);
	}
}
void deleteend(){
	if(head==NULL)
		printf("Linked List is Empty,,try to insert something...\n");
	else if(head->next==head){
		printf("%d deleted successfully...\n",head->data);
		free(head);
		head=NULL;
	}
	else{
		struct node *temp=head->prev;
		temp->prev->next=head;
		head->prev=temp->prev;
		printf("%d deleted successfully from last...\n",temp->data);
		free(temp);
	}
}
void deletespesific(int pos){
	if(head==NULL)
		printf("Linked List is Empty try to insert something...\n");
	else if(head->next==head){
		printf("%d deleted successfully...\n",head->data);
		free(head);
		head=NULL;
	}
	else{
		struct node *temp=head;
		int i=0;
		do{
			temp=temp->next;
			i++;
		}while(temp!=head);
		if(i>pos){
			for(i=0;i<pos;i++)
				temp=temp->next;
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			printf("%d deleted successfully...\n",temp->data);
			free(temp);
		}
	
			
		
	}
}

void display(){
	if(head==NULL){
		printf("Linked List is Empty...\n");
	}
	else{
	
			struct node *temp=head;
			printf("The elements in the Linked List :\n");
			do{
				printf("%d   ",temp->data);
				temp=temp->next;
			}while(temp!=head);
			printf("\n");
		}
}

int main()
{
	insertbegin(10);
	insertbegin(20);
	insertbegin(30);
	insertbegin(40);
	deletebegin();
	display();
	deleteend();
	display();
	deletespesific(1);
	display();
		
	return 0;
}
