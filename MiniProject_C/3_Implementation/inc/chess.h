#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "chess.h"					
#include <conio.h>
#include <ctype.h>		
#include <dos.h>               


int main();
void gotoxy(int x, int y);
int gameover();
void printboard();
int wrongStart();
int initialize();
void cleartext();
int check();

int pawn(int x,int y,int x1,int y1);
int horse(int x,int y,int x1,int y1);
int rook(int x,int y,int x1,int y1);
int bishop(int x,int y,int x1,int y1);
int queen(int x,int y,int x1,int y1);
int king(int x,int y,int x1,int y1);


