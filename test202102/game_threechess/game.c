#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

//初始化
//void InitBoard(char Board[ROW][COL],int row,int col)
void InitBoard()
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			Board[i][j] = ' ';
		}
	}
}


//再屏幕上显示
//void Display(char Board[ROW][COL], int row, int col)
void Display()
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c |", Board[i][j]);
		}
		printf("\b \n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---|");
			}
			printf("\b \n");

		}
	}
}

//玩家走
void PlayerMove()
{
	int x, y;
	printf("现在玩家下。\n");
	while (1)
	{
		printf("请玩家输入坐标：");
		scanf("%d%d", &x, &y);
		if (x<1 || x>ROW || y > COL || y < 1)
		{
			printf("输入坐标不在范围内，请重新输入。\n");
			continue;
		}
		if (Board[y - 1][x - 1] != ' ')
		{
			printf("该位置已被占用，请重新输入。\n");
			continue;
		}
		Board[y-1][x-1] = '*';
		break;
	}
	
}


//电脑下
void ComputerMove()
{
	int x, y;
	printf("现在电脑下。\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (Board[x][y] != ' ')
		{
			continue;
		}
		Board[x ][y ] = '#';
		break;
	}
}


//判断输赢
char Iswin()
{
	int i, j, k, l;
	int c = 1;
	
	//横
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL - CHESS + 1; j++)
		{
			c = 1;
			for (k = j; k < CHESS - 1; k++)
			{
				if (Board[i][k] == ' ')
					break;
				if (Board[i][k] == Board[i][k + 1])
					c++;
			}
			if (c == CHESS)
				return Board[i][j];
		}
	}

	//竖
	for (i = 0; i < COL; i++)
	{
		for (j = 0; j < ROW - CHESS + 1; j++)
		{
			c = 1;
			for (k = j; k < CHESS - 1; k++)
			{
				if (Board[k][i] == ' ')
					break;
				if (Board[k][i] == Board[k + 1][i])
					c++;
			}
			if (c == CHESS)
				return Board[k][i];
		}
	}

	//斜
	for (i = 0; i <= ROW - CHESS; i++)
	{
		for (j = 0; j <= COL - CHESS; j++)
		{

			c = 1;
			for (k =  i, l = j; k <i + CHESS - 1, l < i + CHESS - 1; k++, l++)
			{
				if (Board[k][l] == ' ')
					break;
				if (Board[k][l] == Board[k + 1][l + 1])
					c++;
			}
			if (c == CHESS)
				return Board[k][l];

			c = 1;
			for (k = ROW - i-1, l = j; k > ROW - i - CHESS - 1, l < i + CHESS - 1; k--, l++)
			{
				if (Board[k][l] == ' ')
					break;
				if (Board[k][l] == Board[k - 1][l + 1])
					c++;
			}
			if (c == CHESS)
				return Board[k][l];
		}
	}

	c = 0;
	for (i=0;i<ROW;i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (Board[i][j] == ' ')
				c++;
		}
	}
	
	if (c == 1)
		return 'p';

	return 'c';

}



void ComputerSmartMove()
{

}



