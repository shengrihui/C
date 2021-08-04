#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STU 10
#define SUB 5
#define Stu STU+3	//相当于行数+3，存放最高分、最低分、平均分
#define Sub SUB*2+2	//相当于列数，每一个学科多一个相应排名，还有总分和总分排名
#define N Stu*Sub

void make_scores(int data[Stu][Sub])
{
	int r, c;
	for (r = 0; r < STU; r++)
		for (c = 0; c < SUB; c++)
			data[r][ c] = rand() % 99 + 1;
}

void add(int data[Stu][Sub])
{
	int r, c, sum;
	for (r = 0; r < STU; r++)
	{
		sum = 0;
		for (c = 0; c < SUB; c++)
		{
			sum += data[r][c];
		}
		data[r][SUB * 2] = sum;
	}
}

void max_min_ave(int data[Stu][Sub])
{
	int max = 0, min = 100, sum = 0, ave;
	int r, c;
	int t;
	for (c = 0; c < Sub; c++)
	{
		sum = 0;
		min = 100*SUB;
		max = 0;
		for (r = 0; r < STU; r++)
		{
			t = data[r][c];
			sum += t;
			if (t > max) max = t;
			if (t < min) min = t;
		}
		data[STU][c ] = min;
		data[STU+1][c ] = max;
		data[STU+2][c ] = sum/STU;
	}
}


void pm_c(int data[Stu][Sub],int c,int d)
{
	int pm, r, t,i;
	for (r = 0; r < STU; r++)
	{
		pm = 1;
		t = data[r][c];
		for (i = 0; i < STU; i++)
		{
			if (data[i][c] > t)
				pm++;
		}
		data[r][c + d] = pm;
	}
}

void sort_pm(int data[Stu][Sub])
{
	int c;
	for (c = 0; c < SUB; c++)
	{
		pm_c(data, c,SUB);
	}
	pm_c(data, SUB * 2,1);

}

void display(int data[Stu][Sub], int rows, int cols)
{
	int r, c;
	if (rows == Stu)
	{
		printf("处理后成绩：\n");
		printf("学号\t语文\t语排\t数学\t数排\t英语\t英排\tC语言\tC排\tPython\tpy排\t总分\t总排\n");
	}
	else if (rows == STU)
	{
		printf("原始成绩：\n");
		printf("学号\t语文\t数学\t英语\tC语言\tPython\n");
	}
	for (r = 0; r < rows; r++)
	{
		switch (r)
		{
		case STU:printf("最低分\t"); break;
		case STU + 1:printf("最高分\t"); break;
		case STU + 2:printf("平均分\t"); break;
		default:
			printf("%d\t", r);
			break;
		}

		for (c = 0; c < SUB; c++)
		{
			printf("%d\t", data[r][c]);
			if (cols == Sub)
				switch (r)
				{
				case STU:
				case STU + 1:
				case STU + 2: printf("\t"); break;
				default:
					printf("%d\t", data[r][c + SUB]);
					break;
				}
		}
		if (cols == Sub)
		{
			printf("%d\t", data[r][SUB * 2]);
			if (r < STU)
				printf("%d\t", data[r][SUB * 2 + 1]);
		}

		printf("\n");
	}
}


void dis_sort(int data[Stu][Sub], int pm_sub)
{
	int index, r, c, pm;
	//排名的下标，如果是总成绩，就根据总分排名，否则根据具体学科的排名
	index = pm_sub == 0 ? SUB * 2 + 1 : pm_sub-1 + SUB;
	switch (pm_sub)
	{
	case 1:printf("按语文排名：\n"); break;
	case 2:printf("按数学排名：\n"); break;
	case 3:printf("按英语排名：\n"); break;
	case 4:printf("按C语言排名：\n"); break;
	case 5:printf("按Python排名：\n"); break;
	case 0:printf("按总分排名：\n"); break;
	default:
		break;
	}
	
	printf("学号\t语文\t语排\t数学\t数排\t英语\t英排\tC语言\tC排\tPython\tpy排\t总分\t总排\n");

	for (pm = 1; pm <= STU; pm++)
	{
		for (r = 0; r < STU; r++)
		{
			if (data[r][index] == pm)
			{
				printf("%d\t", r);
				for (c = 0; c < SUB; c++)
					printf("%d\t%d\t", data[r][c], data[r][c + SUB]);
				printf("%d\t%d\t", data[r][SUB * 2], data[r][SUB * 2 + 1]);
				printf("\n");
			}
		}
	}

}


int main()
{
	int data[Stu][Sub] = { 0 };
	int input;
	srand((unsigned int)time(NULL));
	make_scores(data);
	display(data, STU, SUB);
	add(data);
	max_min_ave(data);
	sort_pm(data);
	display(data, Stu, Sub);

	printf("\n你想以哪个学科排序？\n");
	printf("总分请输入0，");
	printf("其他的请输入它的列号（不包括排名，从1开始，比如：语文是1）\n");
	scanf("%d", &input);
	dis_sort(data, input);

	return 0;
}