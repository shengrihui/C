#include "game.h"

//��ʼ��
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


//��ʾ
void Display(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("һ����%d���ס�\n", MINE_NUMBERS);
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

//����
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
			//�����ΧһȦû����
			//��λ����ʾ��
			show[x][y] = ' ';
			//������ΧһȦ���ݹ顱
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					//���겻�ڷ�Χ����continue����ΪCountnimes��Խ��
					if (i == 0 || i == ROWS || j == 0 || j == COLS)
						continue;
					//��Ҳ��֪����ô����������������ǿ���
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


//�Ƿ����
int Notend(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	int count1 = 0;
	int count2 = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			//�Ų��˵ĸ�������
			if (show[i][j] != '*' && show[i][j] != '+')
				count1++;
			//�ҵ��׵�����
			if (show[i][j] == '+' &&  mine[i][j] == '1')
				count2++;
		}
	}
	if (count1 == (row * col - MINE_NUMBERS) || count2 == MINE_NUMBERS)
		return 0;
	return 1;
}


