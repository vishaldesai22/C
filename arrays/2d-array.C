#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,arr[3][3];
clrscr();
printf("enter element \n");
for(i=0;i<3;i++)

{
for(j=0;j<3;j++){
scanf("%d",&arr[i][j]);
}
}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",arr[i][j]);
}printf("\n");
}
	      getch();

	      }