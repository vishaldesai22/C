#include<stdio.h>
#include<conio.h>
void main()
{int ch;
clrscr();
printf("enter ch for insert");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("one");
break;
case 2:printf("two");
break;
case 3: printf("three");
break;
default : printf("default");
break;
}
getch();
}