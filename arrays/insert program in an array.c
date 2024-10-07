#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100],p,i,n,value;
  clrscr();
  printf("enter no. of elements in array::\n");
  scanf("%d",&n);
  printf("enter %d elements::\n",n);
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
    printf("Enter location::\n");
    scanf("%d",&p);

    printf("enter the value to insert::\n");
    scanf("%d",&value);

    for(i=n-1;i>=p-1;i--)

    arr[i+1]=arr[i];
    arr[p-1]=value;

    printf("Result::\n");

    for(i=0;i<n;i++)

    printf("%d\n",arr[i]);

    getch();


}
