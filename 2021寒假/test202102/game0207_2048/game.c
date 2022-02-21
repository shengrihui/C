#include "game.h"

//初始化
void InitBoard()
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			Board[i][j] = 0;
	}
}

//计算数字长度
int intlen(int n)
{
	if (n / 10 == 0)
		return 1;
	else
		return 1 + intlen(n / 10);
}

//显示
void Display()
{
	int i, j, k, l;
	int maxlen = 0;
	int h = 0, w = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (maxlen < intlen(Board[i][j]))
				maxlen = intlen(Board[i][j]);
		}
	}

	w = maxlen + 2;
	h = w / 2 * 2 + 1;
	printf("得分：%d\n ", Scores());
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < w; j++)
			printf("_");
		printf(" ");
	}
	for (i = 0; i < 4; i++)
	{
		for (k = 1; k <= h; k++)
		{
			printf("\n|");

			for (j = 0; j < 4; j++)
			{
				if (k == h / 2 + 1)
				{
					if (Board[i][j] != 0)
					{
						int l = intlen(Board[i][j]);
						printf("%*d%*s", (w - l) / 2+l, Board[i][j], w - (w - l) / 2 - l, "");
					}
					else
						printf("%*s", w, "");
				}
				else if (k == h)
				{
					for (l = 0; l < w; l++)
						printf("_");
				}
				else
					printf("%*s", w, "");

				printf("|");
			}
		}
	}
	printf("\n");
}


//新的2
void Setnew()
{
	int i, j;
	while(1)
	{
		i = rand() % 4;
		j = rand() % 4;
		if (Board[i][j] == 0)
		{
			Board[i][j] = 2;
			break;
		}
	}
}



void move(int s, int ni, int nj)
{
	int i, j, m;
	int n, k, l;
	int f = 0;
	int c = 0;
	int b[16];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			b[i * 4 + j] = Board[i][j];
	}

	//i循环每一行或每一列
	for (i = s, m = 0; m < 4; m++, i += ni)
	{
		n = 3;
		j = i;	//n循环，一行或一列内，一共三次n与j同减
		while (n > 0)
		{
			if (c == n)
				break;
			if (b[j] == 0)
			{
				for (k = n, l = j; k > 0; k--, l += nj)
					b[l] = b[l + nj];
				b[l] = 0;
				c++;
			}
			else
			{
				if (b[j] == b[j + nj])
				{
					b[j] *= 2;
					b[j + nj] = 0;
				}
				n--;
				j += nj;
				c = 0;
			}

		}

		c = 0;
	}


	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			Board[i][j] = b[i * 4 + j];
		}
	}

	Setnew();
	Display();

}


//计算得分
int Scores()
{
	int i, j;
	int sum = 0;
	for (i=0;i<4;i++)
	{
		for (j = 0; j < 4; j++)
			sum += Board[i][j];
	}
	return sum;
}


//是否结束
int Notend()
{	
	//1表示没有结束，0表示结束
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (Board[i][j] == 0)
				return 1;
		}
	}
	return 0;
}


