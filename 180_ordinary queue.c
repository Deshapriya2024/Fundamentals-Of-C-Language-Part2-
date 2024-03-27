#include<stdio.h>
#define SIZE 5
int que[SIZE],front=-1,rear=-1;
void enquee();//prototype
void dequee();//prototype
void display();//prototype
//body part for insetion
void enquee(int val){
//check que is full or not
	if(rear==SIZE-1){
		printf("Queue is full");
	}
	else{
		rear++;
		que[rear]=val;
		printf("%d is inserted successfully\n",val);	
	}	
}
//body part for deletion 
void dequee(){
	//check que is empty or not
	if(rear==-1){
		printf("Queue is empty..\n");
	}
	else{
		front++;
		printf("%d element is dequeed successfully..\n",que[front]);
	}
}
//body part for display
void display(){
	if(front==rear){
		printf("Queue is empty");
	}
	else{
		int i;
		printf("\nthe values in the queue are...\n");
		for(i=front+1;i<=rear;i++){
			printf("%d ",que[i]);
		}
	}
}
int main(){
	int choice,element;
	while(1){
	printf("Enter ur choice\n");
	printf("1.enque\n2.deque\n3.display\n4.stop\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter the elment for enque..\n");
			scanf("%d",&element);
			enquee(element);
			break;
		case 2:
			dequee();
			break;
		case 3:
		display();
		break;
		case 4:
		exit(0);
		break;
	}
}
	return 0;

}
