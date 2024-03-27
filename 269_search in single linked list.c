
//SEARCH A NODE IN SINGLE LINKED LIST
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
// FOR SEARCHING
void search(int val)
{
	struct node *ptr = head;
	int found = 0;
	while (ptr->data != val)
	{
		ptr = ptr->next;
		if(ptr == NULL)
		break;
	}
	if(ptr!=NULL)
	{
		printf("%d was found in the list...\n", ptr->data);
		printf("\nDo you want to Update the value\t: ");
		int ch_val;
		scanf("%d", &ch_val);
		if (ch_val != 0)
		{
			update(ptr);
		}
	}
	else
	{
		printf("Element not found...\n");
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
	search(20);
	return 0;
}

