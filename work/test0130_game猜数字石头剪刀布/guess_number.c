#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void game_guess()
{
	int ret, guess=0;
	printf("开始猜数字游戏！\n");
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("猜一个数：");
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小了！");
		else if (guess > ret)
			printf("猜大了！");
		else
		{
			printf("猜对了！");
			break;
		}
		printf("\n");
	}
}

void game_stone()
{
	int player, com;
	char arr[] = "石头剪刀布  ";
	printf("开始“石头剪刀布”游戏！\n");
	printf("规定：0-石头；1-剪刀；2-布；3-退出。\n");
	do
	{
		printf("请出拳：");
		while(getchar()!='\n')
		{
			;
		}
		player = getchar();
		com = rand() % 3;
		switch ((player))
		{
		case 48:  // 石头
			printf("你出的是石头，");
			if (0 == com)
				printf("电脑出的也是石头，所以结果是平局！\n");
			else if (1 == com)
				printf("电脑出的是剪刀，所以结果是你赢了！\n");
			else if (2 == com)
				printf("电脑出的是布，所以结果是你输了！\n");
			break;
		case 49:  // 剪刀
			printf("你出的是剪刀，");
			if (0 == com)
				printf("电脑出的是石头，所以结果是你输了！\n");
			else if (1 == com)
				printf("电脑出的也是剪刀，所以结果是平局！\n");
			else if (2 == com)
				printf("电脑出的是布，所以结果是你赢了！\n");
			break;
		case 50:  // 布
			printf("你出的是布，");
			if (0 == com)
				printf("电脑出的是石头，所以结果是你赢了！\n");
			else if (1 == com)
				printf("电脑出的是剪刀，所以结果是你输了！\n");
			else if (2 == com)
				printf("电脑出的也是布，所以结果是平局！\n");
			break;
		case 51:
			player = -1;
			printf("退出“石头剪刀布”游戏，再见！\n");
			break;
		default:
			printf("输入有误，请重新输入。");
			break;
		}
	
	} while (player!= -1);

}


void start()
{
	printf("*********************************\n");
	printf("******  0-退出  1-猜数字   ******\n");
	printf("******   2-石头剪刀布  **********\n");
	printf("*********************************\n");
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	start();
	printf("请做选择：");

	do
	{
		printf("请做选择：");
		input = getchar();
		switch (input)
		{
		case 49:
			game_guess();
			break;
		case 48:
			printf("游戏结束，再见。\n");
			break;
		case 50:
			game_stone();
			break;
		default:
			printf("选择有误，请重新选择。\n");
		}
	} while (input != 48);
	return 0;
}




