#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_NUMBERS 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void Display(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Find(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int o);
int Countmines(char mine[ROWS][COLS], int x, int y);
int Notend(char mime[ROWS][COLS], char show[ROWS][COLS], int row, int col);
