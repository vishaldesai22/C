#include<stdio.h>
#include<conio.h>
int linear_search(int arr[],int n,int key)
{
int i;
for(i=0;i<=n;i++)
if(arr[i]==key)
clrscr();
return i;
return-1;
}
int main (void)
{
int arr[]={5,3,6,2,20,7};
int key=20;
int n=sizeof(arr);
int result=linear_search(arr,n,key);
if(result==1)
printf("element is not present in array");
else
printf("element is present at index %d",result);
getch();
return 0;
}
