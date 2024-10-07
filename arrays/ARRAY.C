#include<stdio.h>
#include<conio.h>
void main()
{ int i,arr[3],sum=0,small;
clrscr();
printf("enter element \n");
for(i=0;i<3;i++)
{scanf("%d",&arr[i]);

//sum=sum+arr[i];
}   /*
printf("\n sum of element is %d",sum);
printf("\n displaying elements\n");
for(i=0;i<3;i++)
{
printf("%d\n",arr[i]);
}     */

small=arr[0];
for(i=0;i<3;i++)
{
if (arr[i]<small)
{
small = arr[i];

}

}
printf("small element is %d",small);

getch();


}