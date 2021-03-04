#include "game.h"

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


//显示
void Display(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("一共有%d个雷。\n", MINE_NUMBERS);
	for (i = 0; i <= col; i++)
		printf("%d ", i);
	for (i=1;i<=row;i++)
	{
		printf("\n%d ", i);
		for (j = 1; j <= col; j++)
			printf("%c ", board[i][j]);
	}
	printf("\n");
}

//放雷
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	int count = MINE_NUMBERS;
	while (count > 0)
	{
		i = rand() % row + 1;
		j = rand() % row + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}



void Find(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int o)
{
	int i, j;
	if (o == 1)
	{
		show[x][y] = '+';

	}
	else
	{
		if (Countmines(mine, x, y) == 0)
		{
			//如果周围一圈没有雷
			//该位置显示空
			show[x][y] = ' ';
			//并对周围一圈“递归”
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					//坐标不在范围内则continue，因为Countnimes会越界
					if (i == 0 || i == ROWS || j == 0 || j == COLS)
						continue;
					//我也不知道怎么解释这个，反正就是可以
					if (show[i][j] == '*' || show[i][j] == '+')
						Find(mine, show, i, j, o);
				}
			}
		}
		else
		{
			show[x][y] = '0' + Countmines(mine, x, y);
		}
	}
}

int Countmines(char mine[ROWS][COLS], int x, int y)
{
	int i, j;
	int sum = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
			sum += mine[i][j] - '0';
	}
	return sum;
}


//是否结束
int Notend(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	int count1 = 0;
	int count2 = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			//排查了的格子数量
			if (show[i][j] != '*' && show[i][j] != '+')
				count1++;
			//找到雷的数量
			if (show[i][j] == '+' &&  mine[i][j] == '1')
				count2++;
		}
	}
	if (count1 == (row * col - MINE_NUMBERS) || count2 == MINE_NUMBERS)
		return 0;
	return 1;
}


