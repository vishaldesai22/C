#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * left;
    struct node *right;
};

struct node * create ()
{
     int x;
     struct node * newnode = (struct node *)malloc(sizeof(struct node));
     printf("Enter data (Enter -1 for no node): \n");
     scanf("%d",&x);
     if(x == -1)
	return NULL;
     newnode->data = x;
     printf("Enter left child of %d\n",x);
     newnode->left = create();
     printf("Enter right child of %d\n",x);
     newnode->right = create();
     return newnode;
}
void preOrder(struct node * root)
{
    if(root != NULL)
    {
	 printf("%d\n",root->data);
	 preOrder(root->left);
	 preOrder(root->right);
    }
}
void postOrder(struct node * root)
{
    if(root != NULL)
    {
	 postOrder(root->left);
	 postOrder(root->right);
	 printf("%d\n",root->data);
    }
}
void inOrder(struct node *root)
{
    if(root != NULL)
    {
	 inOrder(root->left);
	 printf("%d\n",root->data);
	 inOrder(root->right);
    }
}
int main()
{
     int i;
     struct node * root = (struct node *)malloc(sizeof(struct node));
     clrscr();
     do
     {
	 printf("\n\n1) create tree\n2)PreOrder Traversing\n3)PostOrder Traversing\n4)InOrder Traversing\n5)Quit\n\n\n");
	 printf("Enter your choice:");
	 scanf("%d",&i);
	 printf("\n\n");
	 switch(i)
	 {
	     case 1: root = create();
		     break;
	     case 2: preOrder(root);
		     break;
	     case 3: postOrder(root);
		     break;
	     case 4: inOrder(root);
		     break;

	 }
     }while(i<=4);
     getch();
     return 0;

}