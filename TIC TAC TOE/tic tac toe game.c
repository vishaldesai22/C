#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

char square[10]={'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void drawBoard();



int main()
{
	system("COLOR 90");
		int player=1,i,choice;
	char mark;
	
	do
	{
		drawBoard();
		player=(player % 2) ? 1 : 2;
		printf("\n\n\t\t\t\t\t\tplayer %d, enter the choice::",player);
		scanf("%d",&choice);
		mark=(player==1) ? 'x' : 'o';
		if(choice==1 && square[1] == '1')
		    square[1]=mark;
		    else if(choice==2 && square[2] == '2')
		    square[2]=mark;
			else if(choice==2 && square[2] == '2')
		    square[2]=mark;
		    else if(choice==3 && square[3] == '3')
		    square[3]=mark;
		    else if(choice==4 && square[4] == '4')
		    square[4]=mark;
		    else if(choice==5 && square[5] == '5')
		    square[5]=mark;
		    else if(choice==6 && square[6] == '6')
		    square[6]=mark;
		    else if(choice==7 && square[7] == '7')
		    square[7]=mark;
		    else if(choice==8 && square[8] == '8')
		    square[8]=mark;
		    else if(choice==9 && square[9] == '9')
		    square[9]=mark;
		    
		    else
		    {
		    	printf("\t\t\t\t\t\n\ninvalid option !");
		    	player--;
		    	getch();
			}
			i=checkwin();
			player++;
	}
	while(i==-1);
	drawBoard();
	
  if(i==1)
  {
  	printf("\n\n\t\t\t\t\t\t==>player %d won",--player);
  }
  else
  {
  	printf("\n\n\t\t\t\t\t\t==>Game draw");
  }
	getch();
	return 0;
}

   int checkwin()
   {
   	 if(square[1]==square[2] && square[2] == square[3])
   	 return 1;
   	 else if (square[4]==square[5] && square[5]==square[6])
   	 return 1;
   	 else if (square[7]==square[8] && square[8]==square[9])
   	 return 1;
   	 else if (square[1]==square[4] && square[4]==square[7])
   	 return 1;
   	 else if (square[2]==square[5] && square[5]==square[8])
   	 return 1;
   	 else if (square[3]==square[6] && square[6]==square[9])
   	 return 1;
   	 else if (square[1]==square[5] && square[5]==square[9])
   	 return 1;
   	 else if (square[3]==square[5] && square[5]==square[7])
   	 return 1;
   	 else if(square[1] !='1' && square[2] !='2' && square[3] !='3' && square[4] !='4' && square[5] !='5' && square[6] !='6' && square[7] !='7' && square[8] !='8' && square[9] !='9')
   	 return 0;
   	 else
   	 return -1;
   }
   
	void drawBoard()
{
	system("cls");
	printf("\n\n");
	printf("\n\n\n\t\t\t\t\t\t--- TIC TAC TOE ---\n\n\n\n");
	printf("\t\t\t\t\t\tplayer1 (x) - player2 (o)\n\n\n");
	printf("\t\t\t\t\t\t     |      |     \n");
	printf("\t\t\t\t\t\t %c   |  %c   |  %c \n",square[1],square[2],square[3]);
	printf("\t\t\t\t\t\t_____|______|_____\n");
	printf("\t\t\t\t\t\t     |      |     \n");
    printf("\t\t\t\t\t\t %c   |  %c   |  %c \n",square[4],square[5],square[6]);
	printf("\t\t\t\t\t\t_____|______|_____\n");
	printf("\t\t\t\t\t\t     |      |     \n");
    printf("\t\t\t\t\t\t %c   |  %c   |  %c \n",square[7],square[8],square[9]);
	printf("\t\t\t\t\t\t     |      |     \n");
	
}
