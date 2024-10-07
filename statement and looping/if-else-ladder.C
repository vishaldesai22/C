#include<stdio.h>
#include<conio.h>
void main ()
{
char ch;
clrscr();

printf("enter the value of ch");
scanf("%c",&ch);

if (ch=='a'||ch=='A')
{printf(" vowel ");
}
else if(ch=='e' || ch=='E')
{printf("vowel");

}
else if(ch=='i'||ch=='I')
{printf("vowel");
}
else if (ch=='o'||ch=='O')
{printf("vowel");
}
else
{printf("by by");}
getch();
}
