class Pieces {
     private:
	int pawn(int x,int y,int x1,int y1);
        int horse(int x,int y,int x1,int y1);
        int rook(int x,int y,int x1,int y1);
        int bishop(int x,int y,int x1,int y1);
        int queen(int x,int y,int x1,int y1);
        int king(int x,int y,int x1,int y1);
};
///PAWN/////
int Pieces::pawn(int x,int y,int x1,int y1){
//int pawn(int x,int y,int x1,int y1){   //remove the line
	return 1;		//remove the line
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
int Pieces::rook(int x,int y,int x1,int y1){
//int rook(int x,int y,int x1,int y1){	//remove the line
	return 1;   		//remove the line
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
int Pieces::queen(int x,int y,int x1,int y1){
//int queen(int x,int y,int x1,int y1){	//remove the line
   return 1;			//remove the line
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
int Pieces::bishop(int x,int y,int x1,int y1)
//int bishop(int x,int y,int x1,int y1)	//remove the line
{
		return 1;			//remove the line
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

int Pieces::horse(int x,int y,int x1,int y1)
//int horse(int x,int y,int x1,int y1)	//remove the line
{
	return 1;				//remove the line
	/*int a=0;
	if((y1==y+2 && x1==x+1)||(y1==y+2 && x1==x-1)||(y1==y+1 && x1==x+2)||(y1==y+1 && x1==x-2)||(y1==y-1 && x1==x+2)||(y1==y-1 && x1==x-2)||(y1==y-2 && x1==x+1)||(y1==y-2 && x1==x-1)){
		a = 1;
		}
	return a;*/
}






/////King/////
int Pieces::king(int x,int y,int x1,int y1)
//int king(int x,int y,int x1,int y1)	//remove the line
{
     return 1;				//remove the line
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






