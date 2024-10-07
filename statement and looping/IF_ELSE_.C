#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a<10)
{printf("a is less than10");
}
else if (a>10)
{printf("a is greater than 10");
}
else
{
printf("a is 10");
}
/*while(a<=10)
{
printf("%d",a);
a++;
} */
getch();
}