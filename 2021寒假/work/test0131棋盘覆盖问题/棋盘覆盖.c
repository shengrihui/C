#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#define n 8
int mark = 0;
int d[n * n] = { 0 };
int dd[(n * n - 1) / 3 + 1] = { 0 };
int nn = (n * n - 1) / 3 + 1;

void show_pre()
{
	int i, j, k;
	int t;
	int m = 1;
	dd[0] = -1;
	for (i = 0; i <= n * n - 1; i++)
	{
		for (j = m; j >= 0; j--)
		{
			if (d[i] == dd[j])
				break;
		}
		if (j < 0)
		{
			dd[m] = d[i];
			m++;
		}
	}


	for (i = 1; i < nn; i++)
	{
		k = i;
		for (j = i; j < nn; j++)
		{
			if (dd[k] > dd[j])
				k = j;
		}
		t = dd[i];
		dd[i] = dd[k];
		dd[k] = t;
	}

	for (i = 0; i < n * n; i++)
	{
		for (j = 0; j < nn; j++)
		{
			if (d[i] == dd[j])
			{
				d[i] = j; break;
			}
		}
	}


}



void show()
{
	show_pre();
	int i, j, k;

	for (k = 0; k < nn; k++)
	{
		Sleep(2000);
		system("cls");
		for (i = 0; i < n * n; i += n)
		{
			for (j = i; j <= i + n - 1; j++)
			{
				if (d[j] <= k)
					printf("%-3d  ", d[j]);
				else if (d[j] > k)
					printf("     ");
			}
			printf("\n");
		}

	}
}


void ret(int si, int sj, int ti, int tj, int size)
{
	int half = size / 2;
	int count = 0;
	mark++;
	count = mark;
	if (size != 1)
	{
		//左上
		if (ti < si + half && tj < sj + half)
			ret(si, sj, ti, tj, half);
		else
		{
			d[n * (sj + half - 1) + (si + half - 1)] = count;
			ret(si, sj, si + half - 1, sj + half - 1, half);
		}

		//左下
		if (ti < si + half && tj >= sj + half)
			ret(si, sj + half, ti, tj, half);
		else
		{
			d[n * (sj + half) + (si + half - 1)] = count;
			ret(si, sj + half, si + half - 1, sj + half, half);
		}

		//右上
		if (ti >= si + half && tj < sj + half)
			ret(si + half, sj, ti, tj, half);
		else
		{
			d[n * (sj + half - 1) + (si + half)] = count;
			ret(si + half, sj, si + half, sj + half - 1, half);
		}

		//右下
		if (ti >= si + half && tj >= sj + half)
			ret(si + half, sj + half, ti, tj, half);
		else
		{
			d[n * (sj + half) + si + half] = count;
			ret(si + half, sj + half, si + half, sj + half, half);
		}


	}
}




int main()
{
	int x = 2;
	int y = 2;
	d[x * n + y] = -1;
	ret(0, 0, x, y, n);
	show();
	return 0;
}


