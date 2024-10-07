#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
int front,rear;
int size,*arr;
};
void init(struct queue *ptr)
{
ptr->rear=-1;
ptr->front=-1;
printf("initialization is successfull!!");
}
int isfull(struct queue *ptr)
{
if((ptr->front==ptr->rear+1)||(ptr->front==0 && ptr->rear==ptr->size-1))
{
return 1;
}
else
{
return 0;
}
}
int isempty(struct queue *ptr)
{
if(ptr->front==-1)
{
return 1;
}
return 0;
}
void enqueue(struct queue *ptr,int val)
{
if(isfull(ptr))
{
printf("Can't insert element in queue queue is overflow\n");
}
else
{
if(ptr->front==-1)ptr->front=0;
ptr->rear=((ptr->rear+1)%(ptr->size));
ptr->arr[ptr->rear]=val;
printf("Insertion of %d element is successfull\n!!",val);
}
}
void dequeue(struct queue *ptr)
{
if(isempty(ptr))
{
printf("Can't remove element from queue because queue is underflow!!\n");
}
else
{
int val;
val=ptr->arr[ptr->front];
if(ptr->front==ptr->rear)
{
ptr->front=ptr->rear=-1;
}
else
{
ptr->front=((ptr->front+1)%
(ptr->size));
}
printf("%d element is removed from queue\n",val);
}
}
void print(struct queue *ptr)
{
int i;
printf("printing queue\n\n");
if(isempty(ptr))  printf("Queue ids underflow\n");
else
{
for(i=ptr->front;i!=ptr->rear;i=((i+1)%(ptr->size)))
{
printf("%d\n",ptr->arr[i]);
}
printf("%d\n",ptr->arr[ptr->rear]);
}
}
int main()
{
int i,val;
struct queue *q=(struct queue*)malloc(sizeof(struct queue));
clrscr();
printf("Enter size of queue\n");
scanf("%d",&q->size);
q->arr=(int*)malloc(q->size*sizeof (int));
init(q);
do
{
printf("\n\n\n1)Enqueue\n2)Dequeue\n3)Print\n4)Exit\n\n\n");
printf("Enter your choice:");
scanf("%d",&i);
switch(i)
{
case 1:printf("Enter element:");
       scanf("%d",&val);
       enqueue(q,val);
       break;
case 2:dequeue(q);
       break;
case 3:print(q);
       break;
       }
}while(i<=3);
getch();
return 0;
}
