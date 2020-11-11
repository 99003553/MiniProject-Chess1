#include <chess.h>


int initialize(){
	  return 1;
	  //setcolor(WHITE);
	 // rectangle(250,90,610,450);

	  // Board Printing
	 /* for (int i=250;i<560;i+=90)
		for (int j=90;j<450;j+=90)
		 {
		 bar(i,j,i+45,j+45);
		 bar(i+45,j+45,i+90,j+90);
		 }

	   //Asigning the Values in the empty spaces
	   for(int i=2;i<=5;i++)
		for(int j=0;j<=7;j++)
		 board[i][j] = 0;

		for(int j=0;j<=7;j++)
		{
		 board[0][j] = j+1;
		 board[1][j] = j+9;      //Pawns for player 1
		 board[7][j] = 0-(j+1);
		 board[6][j] = 0-(j+9);  //Pawns for player 2
		 }
	printboard();

	setcolor(YELLOW);

	  outtextxy(265,55,"A");
	  outtextxy(310,55,"B");
	  outtextxy(355,55,"C");
	  outtextxy(400,55,"D");
	  outtextxy(445,55,"E");
	  outtextxy(490,55,"F");
	  outtextxy(535,55,"G");
	  outtextxy(580,55,"H");

	  outtextxy(220,105,"1");
	  outtextxy(220,150,"2");
	  outtextxy(220,195,"3");
	  outtextxy(220,240,"4");
	  outtextxy(220,285,"5");
	  outtextxy(220,330,"6");
	  outtextxy(220,375,"7");
	  outtextxy(220,420,"8");
 	  return 0;*/
}




int wrongStart()
{
	return 1;
	/*printf("\nWrong Input\nPress any key to continue...");
	char ch=getch();
	if(ch==0){
		getch();
		}
	for(int i=1;i<=30;i++)
		for(int j=1;j<=4;j++)
		{
			gotoxy(i,j);
			printf(" ");
		}
	gotoxy(1,1);
	printf("enter initial position ¯ ");
	return 0;*/
}


///PAWN/////
int pawn(int x,int y,int x1,int y1){
	return 1;
	/*int a=0;
	if(turn==0){
		if(y==1){
		  if(y1==(y+2) && x1==x){
		if(board[y1][x1]==0&&board[y+1][x]==0){
				a = 1;
			   }
			}
			}
		 if(y1==y+1 && x1==x){
			if(board[y1][x1]==0){
				a = 1;
				}
			 }
	   else if(y1==(y+1) && (x1==(x+1)||x1==(x-1))){
		   if(board[y1][x1]<0){
			 a = 1;
			 }
		  }
		}
	  else if(turn==1){
		if(y==6){
		   if( y1==(y-2) && x1==x){
			if(board[y1][x1]==0&&board[y-1][x]==0){
				a = 1;
			   }
			}
		      }
		  if( y1==(y-1) && x1==x){
			if(board[y1][x1]==0){
				a = 1;
				}
			 }
	   else if(y1==(y-1) && (x1==(x-1)||x1==(x+1))){
		   if(board[y1][x1]>0){
			 a = 1;
			 }
		  }
	 }
   if(a==1)
   {
     if(turn==0)
     {
	 if(y1==7)
	 return 2;
     }
     else
     {
	if(y1==0)
	return 2;
     }
    }
 return a;*/
}


///ROOK////
int rook(int x,int y,int x1,int y1){
	return 1;
	/*int a=1;
	if(y1==y)
	{
		for(int i=x+1;i<x1;i++)
		{
			if(board[y1][i]!=0)
			{
				a = 0;
				break;
			}
		}
		for(int i=x-1;i>x1;i--)
		{
			if(board[y1][i]!=0)
			{
				a = 0;
				break;
			}
		}
	}
	else if(x1==x)
	{
		for(int i=y+1;i<y1;i++)
		{
			if(board[i][x1]!=0)
			{
				a = 0;
				break;
			}
		}
		for(int i=y-1;i>y1;i--)
		{
			if(board[i][x1]!=0)
			{
				a = 0;
				break;
			}
		}
	}
	else
	{
		a=0;
	}
	return a;*/
	}




////////QUEEN///////
int queen(int x,int y,int x1,int y1){
   return 1;
  /* if(x==x1||y==y1){
  //if queen moves in + direction
	 return rook(x,y,x1,y1);
   }
   else if(abs(x1-x)==abs(y-y1)){
  //if queen moves in diagonal direction
	 return bishop(x,y,x1,y1);
   }
   else
	 return 0;*/
}





//////BISHOP/////
int bishop(int x,int y,int x1,int y1)
{
		return 1;
		/*int a=1,i;
		if(abs(x1-x)!=abs(y1-y))
		{
			a=0;
		}

		if((x<x1)&&(y<y1))
		{
			for(i=1;(i+x)<x1;i++)
			{
				 if(board[y+i][x+i]!=0)
				 a=0;
			}
		}

       else if((x>x1)&&(y>y1)){
	for(i=1;(x-i)>x1;i++){
	 if(board[y-i][x-i]!=0)
	    a=0;
	 }
	}
	else if((x>x1)&&(y<y1)){
	 for(i=1;(x-i)>x1;i++){
	  if(board[y+i][x-i]!=0)
	    a=0;
	 }
	}
	else if((x<x1)&&(y>y1)){
	for(i=1;(y-i)>y1;i++){
	 if(board[y-i][x+i]!=0)
	    a=0;
	 }
	}
	return a;*/
	}



////HORSE//////

int horse(int x,int y,int x1,int y1)
{
	return 1;
	/*int a=0;
	if((y1==y+2 && x1==x+1)||(y1==y+2 && x1==x-1)||(y1==y+1 && x1==x+2)||(y1==y+1 && x1==x-2)||(y1==y-1 && x1==x+2)||(y1==y-1 && x1==x-2)||(y1==y-2 && x1==x+1)||(y1==y-2 && x1==x-1)){
		a = 1;
		}
	return a;*/
}






/////King/////
int king(int x,int y,int x1,int y1)
{
     return 1;
     /*int a = 0;
     if((y1 == y+1 && x1 == x)||(y1 == y-1 && x1 == x)||(y1 == y+1 && x1 == x+1)||(y1 == y+1 && x1 == x-1)||(y1 == y-1 && x1 == x+1)||(y1 == y-1 && x1 == x-1)||(y1 == y && x1 == x+1)||(y1 == y && x1 == x-1)){
	a = 1;
}
/////CASTLING//////

     else
if(board[y][x+1] == 0 && board[y][x+2] == 0 && (abs(board[y1][x1]) == abs(board[y][x+3]) == 1 || abs(board[y1][x1]) == abs(board[y][x+3]) == 8)){

      return 2;
     }
		if(a==1)
		{
			 if(board[y][x]==5)
			 count1=1;
			 if(board[y][x]==-5)
			 count2=1;
		}
		return a;*/
}








////////Check////////


int check()
{
	  return 1;
	  /*int t=0,i,j,x1,y1;
	   if(turn==0){
	     for(i=0;i<=7;i++)
	     {
		 for(j=0;j<=7;j++)
		 {
			if(board[i][j]==-5)
			{
				 y1=i; x1=j;
				  break;
			}
		  }
	     }
       for(j=0;j<=7;j++){
	for(i=0;i<=7;i++){
	 if (t==1){
	    setcolor(9);
	    rectangle(20,335,100,365);
	    outtextxy(30,340,"Check");
	    break;
	   }

	 if(board[j][i]>=9 && board[j][i]<=16)
		t = pawn(i,j,x1,y1);
	 else if(board[j][i]==2 || board[j][i]==7)
		t = horse(i,j,x1,y1);
	 else if(board[j][i]==4)
		t = queen(i,j,x1,y1);
	 else if(board[j][i]==1 || board[j][i]==8)
		t = rook(i,j,x1,y1);
	 else if(board[j][i]==3 || board[j][i]==6)
		t = bishop(i,j,x1,y1);

	}// for
       }//  for
     }//endif turn
    else {
     for(i=0;i<=7;i++){
      for(j=0;j<=7;j++){
       if(board[i][j]==5){
	 y1=i; x1=j;
	  break;
	      }
	  }
       }
       for(j=0;j<=7;j++){
	for(i=0;i<=7;i++){
	 if (t==1){
	    setcolor(GREEN);
	     rectangle(20,335,100,365);
	    outtextxy(30,340,"Check");
	    break;
	   }

	 if(board[j][i]>=(-9) && board[j][i]<=(-16))
		t = pawn(i,j,x1,y1);
	 else if(board[j][i]==(-2) || board[j][i]==(-7))
		t = horse(i,j,x1,y1);
	 else if(board[j][i]==(-4))
		t = queen(i,j,x1,y1);
	 else if(board[j][i]==(-1) || board[j][i]==(-8))
		t = rook(i,j,x1,y1);
	 else if(board[j][i]==(-3) || board[j][i]==(-6))
		t = bishop(i,j,x1,y1);

	}// for
       }//  for
 }// end else
return 0;*/
}





//////GAME OVER/////
int gameover(){
	return 1;
	/*int i,j,a=0,b=0;

	for(i=0;i<=7;i++)
	{
		for(j=0;j<=7;j++)
		{
		       if(board[i][j]==5)
		       b=1;
		       if(board[i][j]==-5)
		       a=1;
		}
	}
	if(b==0)
	{
	       setcolor(12);
	       outtextxy(30,340,"Game Over");
               setcolor(GREEN);
	       outtextxy(30,300,"Player 1 Loses");
	       getch();
	       return 0;
	}
	else if(a==0)
	{
		setcolor(9);
		outtextxy(30,340,"Game Over");
		outtextxy(30,300,"Player 2 Loses");
		getch();
		return 0;
	}
*/
}








