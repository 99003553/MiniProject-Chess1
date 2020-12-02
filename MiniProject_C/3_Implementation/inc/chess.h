/**
* @file chess.h
*/
#ifndef __CHESS_H__
#define __CHESS_H__

/**
* A game of chess that can be played by two players using keyboard.
* @param[in] x curser position of initial position at x axis.
* @param[in] y curser position of initial position at y axis.
* @param[in] x1 curser position of final position at x axis.
* @param[in] y1 curser position of final position at y axis.
* @param[in] turn is a variable which determine the turn of each player to play the game or move their respective pieces.
* @param[in] turn1 is same as turn which determine the turn of each player to play the game or move their respective pieces.
* @note main() used to call all necessary functions for the game of chess to run.
* @note gotoxy() used to move curser position.
* @note gameover() used to check if game is over.
* @note printboard() used to display the chessboard.
* @note wrongstart() used to check if their is any wrong movement.
* @note initialize() used to initialize the chess game.
* @note cleartext() used to clear the screen.
* @note check() used to check if checkmate is achieved.
* @note class Pieces used to define all pieces into a class.
* @note pawn() used to check the movements of pawn.
* @note horse() used to check the movements of horse.
* @note rook() used to check the movements of rook.
* @note bishop() used to check the movements of bishop.
* @note queen() used to check the movements of queen.
* @note king() used to check the movements of king.
* @note test_main() used to call all necessary test functions for the game of chess.
* @note test_pawns() used to test movement of pawn.
* @note test_rooks() used to test movement of rook.
* @note test_queens() used to test movement of queen.
* @note test_bishops() used to test movement of bishop.
* @note test_horses() used to test movement of horse.
* @note test_kings() used to test movement of king.
* @note test_checks() used to test whether checkmate is achieved or not.
* @note test_gameovers() used to test whether the game is over or not.
*/

int main();
//void gotoxy(int x, int y);
int gameover();
void printboard();
int wrongStart();
int initialize();
void cleartext();
int check();
void test_Initialize();
void test_wrongStart();
void test_pawn();
void test_rook();
void test_queen();
void test_bishop();
void test_horse();
void test_king();
void test_check();
void test_gameover();
//class Pieces{
  //private:
int pawn(int x,int y,int x1,int y1);
int horse(int x,int y,int x1,int y1);
int rook(int x,int y,int x1,int y1);
int bishop(int x,int y,int x1,int y1);
int queen(int x,int y,int x1,int y1);
int king(int x,int y,int x1,int y1);
//};
#endif
