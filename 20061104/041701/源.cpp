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

int user_answer[NUM];//存用户输入的答案
int n;				//n要做的题目数量，用户输入
int right=0;		//right答对的题目数量

//初始num1,op,num2，以及根据条件筛选
//使结果在0到100之间，且都为整数
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

//答题过程，并记录right个数
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

//输出评分结果
void Result()
{
	int i;
	float score = (float)right / n * 100;;
	printf("\n\n");
	printf("你的成绩是%.1f分\n", score);
	for (i = 0; i < n; i++)
	{
		printf("%3d %2d %c %2d = %2d ", i + 1, num1[i], op[i], num2[i], user_answer [i]);
		if (result[i]==user_answer[i])
		{
			printf(" 正确\n");
		}
		else
		{
			printf(" 错误 正确答案：%2d\n", result[i]);
		}
	}
	printf("\n");
}

void start()
{
	int i;
	init();
	printf("请输入题目数量（小于100）：");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start();
			break;
		case 0:
			printf("再见！");
			break;
		default:
			printf("选择有误，请重新选择：");
		}
	} while (input);
	return 0;
}