
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

//find the middle node of this linked list
void findMidNode()
{
	struct node *temp=head;
	if(head==NULL){
		printf("Linked List is Empty\n");
	}
	else{
		int length;
		length=getLen();
		int i;
		for(i=0;i<length/2;i++){
			temp=temp->next;
		}
		printf("\nMiddle Node value is %d\n",temp->data);
	}
}
int getLen()
{
	struct node *temp=head;
	int i=0;
	while(temp!=NULL){
		i++;
		temp=temp->next;
	}
	return i;
}


int main()
{
	inbegin(50);
 	inbegin(40);
 	inbegin(30);
 	inbegin(20);
 	inbegin(10);
 	dis();
findMidNode();
	return 0;
}

