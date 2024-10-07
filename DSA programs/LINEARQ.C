#include<stdio.h>
#include<conio.h>
#define MAX 8
int queue[MAX],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{ int ch;
  clrscr();
  while(1)
  { printf("\n*****menu*****");
    printf("\n\n1)Enqueue\n2)Dequeue\n3)Display\n4)Exit");
    printf("\nenter your choice");
    scanf("%d",&ch);
    switch(ch)
    { case 1: enqueue();
	      break;
      case 2: dequeue();
	      break;
      case 3: display();
	      break;
      case 4: exit(0);
	      break;
      default: printf("\nchoose a valid number");
	       break;
    }
  }
}
void enqueue()
{ int x;
  if(rear==MAX-1)
  printf("\nQueue is overflown");
  else
  { if(front==-1)
    front=0;
    rear++;
    printf("\n enter element to insert:");
    scanf("%d",&queue[rear]);
  }
}
void dequeue()
{ if(front==-1)
  printf("\n queue is empty:");
  else
  { printf("\n deleted element is %d", queue[front]);
    front++;
    if(front>rear)
    front=rear=-1;
  }
}
void display()
{ int i;
  if(rear==-1)
  printf("\nqueue is empty");
  else
  { printf("\n **** elements in queue *****.\n");
    for(i=front;i<=rear;i++)
    printf("%d  ",queue[i]);
  }
}
