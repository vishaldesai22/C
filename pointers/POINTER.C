#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr,num =2;
clrscr();
ptr = &num;
printf("value is %d",*ptr);
printf("ptr contains %x",ptr);
printf("num contains %x",&num);
getch();

}