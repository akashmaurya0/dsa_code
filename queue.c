#include<stdio.h>
#include<conio.h>
void pop(int queue[],int *front,int *rear,int size)
{
	if(*front==-1&&*rear==-1)
	{
		printf("stack is already empty");
	}
	else
	{
	if(*front==*rear)
	{
		int temp=queue[*front];
		printf("poped value is : %d",temp);
		*front=-1;
		*rear=-1;
		}
	else
	{
		int temp=queue[*front];
		printf("poped value is : %d",temp);
		 *front = (*front + 1) % size;
	}
	   	
    }
}
void push(int queue[],int size,int *front,int *rear,int data)
{
	if((*rear+1)%size==*front)
	{
		printf("queue is already full\n");
	}
	else
	{
		if(*front==-1&&*rear==-1)
		{
			*front=0;
			*rear=0;
			queue[*rear]=data;
			printf("data inserted\n");
		}
		else
		{    *rear=(*rear+1)%size;
			queue[(*rear)]=data;
			printf("data inserted\n");
			
		}
	}
}
int main()
{
	int queue[3],front=-1,rear=-1,data,choice,size=3;
  while(1)
  {
    system("cls");
	printf("- - - - - - - - - - - - - - - - -\n");
	printf("1 : For push operation\n");
	printf("2 : For pop operation\n");
	printf("3 : for exit");
	printf("- - - - - - - - - - - - - - - - -\n ");
    printf("Enter your choice\n ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("Enter the data to push into queue->");
    		scanf("%d",&data);
    		push(queue,size,&front,&rear,data);
    		break;
    	case 2:
		    pop(queue,&front,&rear,size);
			break;
		case 3:
		return 0;
		
		default:
		 printf("invalid choice \n");
		 break;	
				
	}
	getch();
}
}
