#include<stdio.h>
#include<conio.h>
void main()
{

int i,j,no,k;
clrscr();
for(k=0;k<5;k++){

for(i=0;i<2*(5-i)-1;i++)
{printf(" ");   }
for(j=0;j<i;j++)
{
printf("*") ;
}

	     printf(" \n");

}

			  getch();
}