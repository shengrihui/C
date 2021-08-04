#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STU 10
#define SUB 5
#define Stu STU+3	//�൱������+3�������߷֡���ͷ֡�ƽ����
#define Sub SUB*2+2	//�൱��������ÿһ��ѧ�ƶ�һ����Ӧ�����������ֺܷ��ܷ�����
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
		printf("�����ɼ���\n");
		printf("ѧ��\t����\t����\t��ѧ\t����\tӢ��\tӢ��\tC����\tC��\tPython\tpy��\t�ܷ�\t����\n");
	}
	else if (rows == STU)
	{
		printf("ԭʼ�ɼ���\n");
		printf("ѧ��\t����\t��ѧ\tӢ��\tC����\tPython\n");
	}
	for (r = 0; r < rows; r++)
	{
		switch (r)
		{
		case STU:printf("��ͷ�\t"); break;
		case STU + 1:printf("��߷�\t"); break;
		case STU + 2:printf("ƽ����\t"); break;
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
	//�������±꣬������ܳɼ����͸����ܷ�������������ݾ���ѧ�Ƶ�����
	index = pm_sub == 0 ? SUB * 2 + 1 : pm_sub-1 + SUB;
	switch (pm_sub)
	{
	case 1:printf("������������\n"); break;
	case 2:printf("����ѧ������\n"); break;
	case 3:printf("��Ӣ��������\n"); break;
	case 4:printf("��C����������\n"); break;
	case 5:printf("��Python������\n"); break;
	case 0:printf("���ܷ�������\n"); break;
	default:
		break;
	}
	
	printf("ѧ��\t����\t����\t��ѧ\t����\tӢ��\tӢ��\tC����\tC��\tPython\tpy��\t�ܷ�\t����\n");

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

	printf("\n�������ĸ�ѧ������\n");
	printf("�ܷ�������0��");
	printf("�����������������кţ���������������1��ʼ�����磺������1��\n");
	scanf("%d", &input);
	dis_sort(data, input);

	return 0;
}