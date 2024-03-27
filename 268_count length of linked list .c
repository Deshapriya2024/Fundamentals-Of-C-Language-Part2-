//COUNT LENGTH OF LINKED LIST
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}sn;
sn *head=NULL;

//INSERT AT BEGINING
void inbegin(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	
	if(head==NULL){
	newnode->next=NULL;
	head=newnode;
 }
else{
	newnode->next=head;
	head=newnode;
	
}
printf("%d inserted at first\n",val);
}

// DISPLAY PURPOSE

void dis(){
	sn *temp;
	temp=head;
	printf("\nTHE VALUES ARE:\n");
	while(temp!=NULL){
	printf("%d\t",temp->data);
	temp=temp->next;
	}
}

// FOR COUNTING PURPOSE
void List_length()
{
	struct node *ptr = head;
	int count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	printf("\nNo. of Nodes present = %d\n", count);
}
 int main()
 {
 	inbegin(50);
 	inbegin(40);
 	inbegin(30);
 	inbegin(20);
 	inbegin(10);
 	dis();
 	List_length();
 	
 	return 0;
 }
