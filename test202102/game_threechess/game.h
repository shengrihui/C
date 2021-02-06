#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>

#define ROW 3
#define COL 3
#define CHESS 3

//void InitBoard(char Board[ROW][COL], int row, int col);
//void Display(char Board[ROW][COL], int row, int col);

char Board[ROW][COL];
int Total[4];

void InitBoard();
void Display();
void PlayerMove();
void ComputerMove();
char Iswin();
void ComputerSmartMove();

