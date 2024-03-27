#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int pQueue[SIZE],rear=-1,front=-1;
void displayPq();//prototype
void check(int val);//prototype
void enQueue_pq(int val);//prototype
void deque();//prototype
//body part for insertion
void enQueue_pq(int val)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is Full ..Insertion Not Possible\n");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front++;
        rear++;
        pQueue[rear] = val;
        return;
    }
    else
        check(val);
    rear++;
}
//body part for checking
void check(int val)
{
    int i,j;
    for (i = 0; i <= rear; i++)
    {
        if (val >= pQueue[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                pQueue[j] = pQueue[j - 1];
            }
            pQueue[i] = val;
            return;
        }
    }
    pQueue[i] = val;
}
//body part for display
void displayPq()
{
   int x;
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
    for (x=front; x <= rear; x++)
    {
        printf(" %d \t", pQueue[x]);
    }
}
//body part for deletion
void deque()
{
	if(rear!=-1)
	{
		printf("\n%d is dequeed ",pQueue[front]);
		front++;
	}
	else
	printf("\nQue is empty ! deletion not possible");
}
int main()
{
	int choice,ele;
	while(1)
	{
		printf("\nChoose Operation : 1.Insert 2.Delete 3.Display 4.Stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the value : ");
				scanf("%d",&ele);
				enQueue_pq(ele);
				break;
			case 2:
				deque();
				break;
			case 3:
				displayPq();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice...\n");				
		}
	}	
	return 0;
}

