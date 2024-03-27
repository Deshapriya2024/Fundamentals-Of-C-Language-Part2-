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

//DELETION AT BEGINING
void delbegin(){
	struct node *temp=head;
	head=head->next;
	printf("\n%d deleted successfully\n",temp->data);
	free(temp);
	printf("DELETED SUCCESSFULLY FROM MEMORY.");
}

//display purpose

void dis(){
	sn *temp;
	temp=head;
	printf("\nTHE VALUES ARE:\n");
	while(temp!=NULL){
	printf("%d\t",temp->data);
	temp=temp->next;
	}
}
int main()
{
	inbegin(50);
	inbegin(40);
	inbegin(30);
	inbegin(20);
	inbegin(10);
	dis();
	delbegin();
	dis();
	 	
 	return 0;
}

