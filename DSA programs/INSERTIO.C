#include<stdio.h>
#include<conio.h>
void insertionSort(int arr[],int size)
{
   int i,j,temp;
   for(i = 1 ;i<size-1;i++)
   {
      j = i;
      while(j>=0)
      {
	 if(arr[i]<arr[j])
	 {
	    temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
	 }
       j--;
      }
   }
}
void main()
{
   int arr[100],size,i;
   clrscr();
   printf("Enter size of array \n");
   scanf("%d",&size);
   printf("Enter array elements\n");
   for(i = 0 ;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Entered array before sort\n");
   for(i = 0 ;i<size;i++)
   {
       printf("%d\n",arr[i]);
   }
    insertionSort(arr,size);
    printf("Entered array after sort\n");
     for(i = 0 ;i<size;i++)
   {
       printf("\t\t%d\n",arr[i]);
   }
   getch();

}