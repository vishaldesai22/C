#include<stdio.h>
#include<conio.h>
int main()
{
int i,arr[100],n,c,d,swap;
clrscr();

printf("enter no of element\n");
scanf("%d",&n);

printf("enter %d element",n);
for(c=0;c<n;c++)
{
scanf("%d",&arr[c]);
}

for(c=0;c<n;c++)
{
for(d=0;d<n-c-1;d++);
{
if(arr[d]>arr[d+1])
{
swap=arr[d];
arr[d]=arr[d+1];
arr[d+1]=swap;
}
}
}

printf("sorted list in ascending order :\n");
for(i=0;i<=n;i++)
{
printf("%d\n",arr[i]);
}

getch();
return 0;
}