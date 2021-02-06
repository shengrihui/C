
#include "game.h"

void game()
{
	int first = 0;
	Total[0]++;
	InitBoard();
	Display();
	printf("***** 1.�������� 2.������� *****\n��ѡ��");
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
		printf("���ʤ����\n");
	}
	else if (Iswin()=='#')
	{
		Total[2]++;
		printf("����ʤ����\n");
	}
	else
	{
		Total[3]++;
		printf("�����ƽ�֣�\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("��Ϸ��������һ������%d�̣�һ��ʤ����%d�̣�����%d�̡�\n�ټ���\n",Total[0],Total[1],Total[2]);
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ������������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}

