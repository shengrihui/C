#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int Board[4][4];

void InitBoard();
int intlen(int n);
void Display();
void Setnew();
void move(int s, int ni, int nj);
int Scores();
int Notend();
