
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node* insert_at_last(struct node*head,int val)
{
struct node*q=(struct node*)malloc(sizeof(struct node));
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;
q->data=val;
while(ptr->next != NULL)
{
ptr=ptr->next;
}
ptr->next=q;
q->next = NULL;
printf("insertion of %d element is successfull!!",val);
return head;
}
struct node* insert_at_index(struct node*head,int val,int index)
{
int i;
struct node *ptr=head->next;
struct node *q=(struct node*)malloc(sizeof(struct node));
q->data=val;
for(i=0;i<=index-1;i++)
{
ptr=ptr->next;
}
q->next=ptr->next;
ptr->next=q;
return head;
}
struct node* insert_at_beginning(struct node*head,int val)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=val;
ptr->next=head->next;
head->next=ptr;
return head;
}
struct node* delete_at_last(struct node*head)
{
struct node*p=(struct node*)malloc(sizeof(struct node));
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;
p=ptr->next;
while(p->next!=NULL)
{
ptr=ptr->next;
p=ptr->next;
}
ptr->next=NULL;
printf("deletion of %d element is successfull!!",p->data);
free(p);
return head;
}
struct node* delete_at_index(struct node*head,int index)
{
int i;
struct node *ptr=(struct node*)malloc(sizeof(struct node));
struct node *p=(struct node*)malloc(sizeof(struct node));
ptr=head;
p=head->next;
for(i=0;i<=index-1;i++)
{
ptr=ptr->next;
p=p->next;
}
ptr->next=p->next;
free(p);
return head;
}
struct node* delete_at_beginning(struct node*head)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*p=(struct node*)malloc(sizeof(struct node));
ptr=head;
p=head->next;
ptr->next=p->next;
free(p);
return head;
}
void travesial(struct node *head)
{
struct node* p=head->next;
while(p->next!=NULL)
{
printf("%d\n",p->data);
p=p->next;}
printf("%d\n",p->data);
}
  void main()
  {
   int i=0 ,val,index;
   struct node*head=(struct node*)malloc(sizeof(struct node));
   head->next =NULL;

   clrscr();
   do{
   printf("\n\n\n\1)insertion \n 2)deletion \n3)travesial \n4)exit\n\n\n");
   printf("enter  your choice:");
   scanf("%d",&i);
   if(i==1)
   {
   printf("1)insert at last\n2)insert at index \n3)insert at beginning\n ");
   scanf("%d",&i);
   switch(i)
   {
      case 1:
		  printf("enter value:");
		  scanf("%d",&val);
		   head=insert_at_last(head,val);
		   break;
      case  2:
		   printf("enter value");
		   scanf("%d",&val);
		   printf("%d",&index);
		   head = insert_at_index(head,val,index);
		   break;

       case 3:       printf("enter value");
		     scanf("%d",&val);
		    head = insert_at_beginning(head,val);
		     break;
	     }
	  }
	else if(i== 2)
	{
	printf("1)delete_at_last\n2)delete_at_index\n3)delete at beginning\n");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
	     head = delete_at_last (head);
	     break;
	case 2:
	       printf("enter index");
	       scanf("%d",&index);
		head = delete_at_index(head,index);
		break;
	  case 3:
		 delete_at_beginning(head);
		 break;
	      }
	}
	else if (i==3)
	{
	printf("printing linked list \n");
	travesial(head);
	}
      }while(i<=3);
      getch();
      }




