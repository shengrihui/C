#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define NUM 100

int num1[NUM];
char op[NUM];
int num2[NUM];
int result[NUM];

char op_set[4] = { '+','-','*','/' };

int user_answer[NUM];//���û�����Ĵ�
int n;				//nҪ������Ŀ�������û�����
int right=0;		//right��Ե���Ŀ����

//��ʼnum1,op,num2���Լ���������ɸѡ
//ʹ�����0��100֮�䣬�Ҷ�Ϊ����
void init()
{
	int i, div;

	for (i = 0; i < NUM; i++)
	{
		op[i] = op_set[rand() % 4];

		div = 0;
		switch (op[i])
		{
		case '+':
			do
			{
				num1[i] = rand() % 100;
				num2[i] = rand() % 100;
				result[i] = num1[i] + num2[i];
			} while (result[i] > 100);
			break;
		case '-':
			do
			{
				num1[i] = rand() % 100;
				num2[i] = rand() % 100;
				result[i] = num1[i] - num2[i];
			} while (result[i]< 0);
			break;
		case '*':
			do
			{
				num1[i] = rand() % 100;
				num2[i] = rand() % 100;
				result[i] = num1[i] * num2[i];
			} while (result[i] > 100);
			break;
		case '/':
			do
			{
				num1[i] = rand() % 100;
				num2[i] = rand() % 99 + 1;
				result[i] = num1[i] / num2[i];
			} while (num1[i] % num2[i] != 0);
			break;
		default:
			break;
		}

	}
}

//������̣�����¼right����
void Answering()
{
	int i;
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%3d  %2d %c %2d = ", i+1, num1[i ], op[i ], num2[i ]);
		scanf("%d", &user_answer[i ]);
		if (user_answer[i] == result[i])
			right++;
	}
}

//������ֽ��
void Result()
{
	int i;
	float score = (float)right / n * 100;;
	printf("\n\n");
	printf("��ĳɼ���%.1f��\n", score);
	for (i = 0; i < n; i++)
	{
		printf("%3d %2d %c %2d = %2d ", i + 1, num1[i], op[i], num2[i], user_answer [i]);
		if (result[i]==user_answer[i])
		{
			printf(" ��ȷ\n");
		}
		else
		{
			printf(" ���� ��ȷ�𰸣�%2d\n", result[i]);
		}
	}
	printf("\n");
}

void start()
{
	int i;
	init();
	printf("��������Ŀ������С��100����");
	scanf("%d", &n);
	Answering();
	Result();
}

void menu()
{
	printf("***********************\n");
	printf("*** 0.exit  1.start ***\n");
	printf("***********************\n");
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start();
			break;
		case 0:
			printf("�ټ���");
			break;
		default:
			printf("ѡ������������ѡ��");
		}
	} while (input);
	return 0;
}