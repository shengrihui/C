#include "game.h"

//�������
int input_xyo(int n, int lower, int upper)
{
    int ret = 0;
    while (1)
    {
        switch (n)
        {
        case 1:
            printf("�������У�");
            scanf("%d", &ret);
            break;
        case 2:
            printf("�������У�");
            scanf("%d", &ret);
            break;
        case 3:
            printf("�����������0-�Ų飬1-���ף���");
            scanf("%d", &ret);
            break;
        default:
            break;
        }
        if (ret<lower || ret>upper)
            printf("�����������������롣\n");
        else
            return ret;
    }
    
}

void game()
{
    char mine[ROWS][COLS] = { 0 };
    char show[ROWS][COLS] = { 0 };
    int x, y, o;

    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    Setmine(mine, ROW, COL);
    Display(show, ROW, COL);
    //Display(mine, ROW, COL);
    
    while (Notend(mine,show, ROW, COL))
    {
        x = input_xyo(1, 1, ROW);
        y = input_xyo(2, 1, COL);
        o = input_xyo(3, 0, 1);

        if (mine[x][y] == '1' && o != 1)
        {
            printf("�˴����ף��㱻ը���ˣ�\n");
            Display(mine, ROW, COL);
            break;
        }

        Find(mine, show, x, y, o);
        Display(show, ROW, COL);
    }
    if (Notend(mine, show, ROW, COL) == 0)
        printf("��ϲ�㣬ɨ�׳ɹ���\n");
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
            printf("��Ϸ�������ټ���" );
            break;
        default:
            printf("ѡ������������ѡ��\n");
            break;
        }
    } while (input);
    return 0;
}
