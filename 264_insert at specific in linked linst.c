#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}sn;
sn *head=NULL;
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

//INSERTION AT SPESIFIC POSITION
void inspecific(int val, int loc)
{
	struct node *newNode,*temp=head;
	newNode->data=val;
	newNode->next=NULL;
//TRAVERSING
    while(loc!=1){
	temp=temp->next;
	loc--;
    }
newNode->next=temp->next;
temp->next=newNode;
printf("%d inserted at specific position\n",val);
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
	inbegin(40);
	inbegin(30);
	inbegin(20);
	inbegin(10);
	dis();
	inspecific(999,2);
	dis();
	return 0;
}
