

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
	printf("\n");
}

//find nth number node
int get_nth_Node(int index){
	struct node *temp=head;
	int i=0; //counter
	while(temp!=NULL){
		if(i==index){
			return temp->data;
		}
		i++;
		temp=temp->next;
	}
	return -1;
}



int main()
{
	inbegin(50);
 	inbegin(40);
 	inbegin(30);
 	inbegin(20);
 	inbegin(10);
 	dis();
    int temp=get_nth_Node(3);
    if(temp==-1)
    printf("Node not found ..\n");
    else
    printf("%d was found at ....\n",temp);
	return 0;
}

