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

//DELETION AT END
void delend(){
	struct node *temp=head,*help=head;
	while(temp->next!=NULL){
	temp=temp->next;
	}
	while(help->next!=temp){
		help=help->next;}
		help->next=NULL;
		printf("\n%d is deleted\n",temp->data);
		free(temp);

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
	delend();
	dis();
 	
 	return 0;
}

