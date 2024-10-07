#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int i,j;
printf("enter the number recursion");
scanf("%d",&i);
j=fact(i);
printf("factorial of no is %d",j);
getch();

}

int fact(int num)
{	  int f1;

if(num ==1 )
{
return (1);

}
else
{
f1=num*fact(num-1);

}
		   return (f1);
}