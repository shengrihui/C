#include "game.h"


void game()
{
    int de = 0;
    Setnew();
    Display();
    while (Notend())
    {
        scanf("%d", &de);
        switch (de)
        {
        case 2:
            move(15, -1, -4);
            break;
        case 4:
            move(0, 4, 1);
            break;
        case 6:
            move(15, -4, -1);
            break;
        case 8:
            move(0, 1, 4);
            break;
        default:
            printf("�����������������롣\n");
            break;
        }


    }
}


void menu()
{
    printf("**************************\n");
    printf("***** 0.exit  1.play *****\n");
    printf("**************************\n");
}


int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("��Ϸ��������ĵ÷��ǣ�%d��\n�ټ���", Scores());
            break;
        default:
            printf("ѡ������������ѡ��\n");
            break;
        }
    } while (input);
    return 0;
}
