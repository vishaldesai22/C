#include<stdio.h>
#include<conio.h>
void main()
{
int no,sum=0,i;
  clrscr();
printf("enter a number");
scanf("%d",&no);
for(i=0;i<=no;i++)
{
if(i%2==1)
{
sum= sum+i;
		      }
}
printf("sum of no is %d",sum);

getch();
}                 //sum of even no between n