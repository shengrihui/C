#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void game_guess()
{
	int ret, guess=0;
	printf("��ʼ��������Ϸ��\n");
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("��һ������");
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С�ˣ�");
		else if (guess > ret)
			printf("�´��ˣ�");
		else
		{
			printf("�¶��ˣ�");
			break;
		}
		printf("\n");
	}
}

void game_stone()
{
	int player, com;
	char arr[] = "ʯͷ������  ";
	printf("��ʼ��ʯͷ����������Ϸ��\n");
	printf("�涨��0-ʯͷ��1-������2-����3-�˳���\n");
	do
	{
		printf("���ȭ��");
		while(getchar()!='\n')
		{
			;
		}
		player = getchar();
		com = rand() % 3;
		switch ((player))
		{
		case 48:  // ʯͷ
			printf("�������ʯͷ��");
			if (0 == com)
				printf("���Գ���Ҳ��ʯͷ�����Խ����ƽ�֣�\n");
			else if (1 == com)
				printf("���Գ����Ǽ��������Խ������Ӯ�ˣ�\n");
			else if (2 == com)
				printf("���Գ����ǲ������Խ���������ˣ�\n");
			break;
		case 49:  // ����
			printf("������Ǽ�����");
			if (0 == com)
				printf("���Գ�����ʯͷ�����Խ���������ˣ�\n");
			else if (1 == com)
				printf("���Գ���Ҳ�Ǽ��������Խ����ƽ�֣�\n");
			else if (2 == com)
				printf("���Գ����ǲ������Խ������Ӯ�ˣ�\n");
			break;
		case 50:  // ��
			printf("������ǲ���");
			if (0 == com)
				printf("���Գ�����ʯͷ�����Խ������Ӯ�ˣ�\n");
			else if (1 == com)
				printf("���Գ����Ǽ��������Խ���������ˣ�\n");
			else if (2 == com)
				printf("���Գ���Ҳ�ǲ������Խ����ƽ�֣�\n");
			break;
		case 51:
			player = -1;
			printf("�˳���ʯͷ����������Ϸ���ټ���\n");
			break;
		default:
			printf("�����������������롣");
			break;
		}
	
	} while (player!= -1);

}


void start()
{
	printf("*********************************\n");
	printf("******  0-�˳�  1-������   ******\n");
	printf("******   2-ʯͷ������  **********\n");
	printf("*********************************\n");
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	start();
	printf("����ѡ��");

	do
	{
		printf("����ѡ��");
		input = getchar();
		switch (input)
		{
		case 49:
			game_guess();
			break;
		case 48:
			printf("��Ϸ�������ټ���\n");
			break;
		case 50:
			game_stone();
			break;
		default:
			printf("ѡ������������ѡ��\n");
		}
	} while (input != 48);
	return 0;
}




