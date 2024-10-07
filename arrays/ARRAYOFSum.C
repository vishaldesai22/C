#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
int marks;
char name[20];
};
void main ()

{int i;

struct student s[2];
clrscr();
for (i=0;i<3;i++)
{
printf("\n enter rollno");
scanf("%d",&s[i].rollno);
printf("\n enter marks");
scanf("%d",&s[i].marks);
printf("\nenter name ");
scanf("%s",&s[i].name);
}
for (i=0;i<3;i++)
{
printf("roll no %d\t",s[i].rollno);
printf("marks %d\t",s[i].marks);
printf("name %s\t",s[i].name);
}
getch();
}