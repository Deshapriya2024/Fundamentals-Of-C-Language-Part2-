#include<stdio.h>
#include<stdlib.h>
#define size 4
int que[size],front=-1,rear=-1;
void enque();//prototype
void deque();//prototype
void display();//prototype
//body part for insertion
void enque()
{
	//queue is full or not
	if((rear==size-1 && front==0) || (rear==front-1))
	printf("The Queue is full ....INSERTION not possible\n");
	else
	{
		if(rear==size-1 && front>0)
		rear=-1;
		rear++;
		printf("Enter the Value : ");
		scanf("%d",&que[rear]);
		printf("%d Enqueued successfully ....\n",que[rear]);
		if(front==-1)
		front=0;
	}
}
//body part for deletion
void deque()
{   
    //queue is empty
	if(rear==-1)
	printf("The Queue is Empty ...DELETION not possible\n");
	else
	{
		printf("%d Dequeued successfully ....\n",que[front]);
		front++;
		if(front==size)
		front=0;
		if(front==rear+1)
		{rear=-1;
		front=-1;}
	}
}

//body part for display
void display()
{
	if(rear!=-1)
	{
		int i;
		for(i=front;i!=rear;i=(i+1)%size)
		{
			printf("%d  ",que[i]);
			if(i==rear-1)
			printf("%d\n",que[rear]);
		}
	}
	else
	printf("The Queue is Empty ...DISPLAY not possible\n");
}

int main()
{
	int choice;
	while(1)
	{
		printf("\nChoose Operation : 1.Insert 2.Delete 3.Display 4.Stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enque();
				break;
			case 2:
				deque();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice...\n");				
		}
	}
	return 0;
}
