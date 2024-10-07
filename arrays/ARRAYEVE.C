#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,a[10];

printf("enter array element");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<10;i++)
{
if(a[i]%2==0)
{
printf("\n even number %d",a[i]);
}
else
{ printf("\n odd numbers is %d",a[i]);
}

}                                  getch();


}