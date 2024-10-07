#include<stdio.h>
#include<conio.h>
 void main()
{
 int a[100],i,j,n,temp,min;
 clrscr();
 printf("enter size of the array",n);
 scanf("%d",&n);
 printf("enter %d array elements",n);
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
  min=i;
 for(j=i+1;j<n;j++)
 {
 if(a[min]>a[j])
 {min=j;
 }
 }
 if(min !=i)
 {
 temp=a[min];
 a[min]=a[i];
 a[i]=temp;
 }
 printf("sorted element");
 for(i=0;i<n;i++)
 printf("\n %d",a[i]);
 getch();
 }}


