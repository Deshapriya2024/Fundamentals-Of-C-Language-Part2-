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

void insertend(int val)
{
	if(head==NULL)
		insertbegin(val);
	else{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=val;
		newnode->next=head;
		newnode->prev=head->prev;
		head->prev->next=newnode;
		head->prev=newnode;
		printf("%d inserted successfully at end...\n",newnode->data);
	}
}

void insertspesific(int val,int pos){
	if(head==NULL)
		insertbegin(val);
	else{
	    struct node *temp=head;
		int i=0;
		do{
			temp=temp->next;
			i++;
		}while(temp!=head);
		if(i>pos){
			for(i=0;i<pos-1;i++)
				temp=temp->next;
			struct node *newnode;
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->data=val;
			newnode->next=temp->next;
			newnode->prev=temp;
			temp->next->prev=newnode;
			temp->next=newnode;
			printf("%d inserted successfully at spesific pos...\n",newnode->data);
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
	insertend(20);
	insertspesific(30,1);
	display();
	return 0;
}
