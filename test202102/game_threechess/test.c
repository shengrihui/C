
#include "game.h"

void game()
{
	int first = 0;
	Total[0]++;
	InitBoard();
	Display();
	printf("***** 1.电脑先下 2.玩家先下 *****\n请选择：");
	scanf("%d", &first);
	do
	{
		if (2 == first)
		{
			PlayerMove();
			Display();
			if (Iswin() != 'c')
				break;
		}
		ComputerMove();
		Display();
		if (Iswin() != 'c')
			break;
		first = 2;
	} while (1);

	if(Iswin()=='*')
	{
		Total[1]++;
		printf("玩家胜利！\n");
	}
	else if (Iswin()=='#')
	{
		Total[2]++;
		printf("电脑胜利！\n");
	}
	else
	{
		Total[3]++;
		printf("结果是平局！\n");
	}

}



void menu()
{
	printf("************************\n");
	printf("**** 0.exit  1.play ****\n");
	printf("************************\n");
}

int main()
{
	int input = 0;
	int i;
	for (i = 0; i < 4; i++) { Total[i] = 0; }
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("游戏结束，你一共下了%d盘，一共胜利了%d盘，输了%d盘。\n再见。\n",Total[0],Total[1],Total[2]);
			break;
		case 1:
			game();
			break;
		default:
			printf("选择有误，请重新选择。\n");
			break;
		}
	} while (input);

	return 0;
}

