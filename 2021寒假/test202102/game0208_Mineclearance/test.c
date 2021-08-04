#include "game.h"

//获得输入
int input_xyo(int n, int lower, int upper)
{
    int ret = 0;
    while (1)
    {
        switch (n)
        {
        case 1:
            printf("请输入行：");
            scanf("%d", &ret);
            break;
        case 2:
            printf("请输入列：");
            scanf("%d", &ret);
            break;
        case 3:
            printf("请输入操作（0-排查，1-设雷）：");
            scanf("%d", &ret);
            break;
        default:
            break;
        }
        if (ret<lower || ret>upper)
            printf("输入有误，请重新输入。\n");
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
            printf("此处是雷，你被炸死了！\n");
            Display(mine, ROW, COL);
            break;
        }

        Find(mine, show, x, y, o);
        Display(show, ROW, COL);
    }
    if (Notend(mine, show, ROW, COL) == 0)
        printf("恭喜你，扫雷成功！\n");
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
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("游戏结束，再见！" );
            break;
        default:
            printf("选择有误，请重新选择。\n");
            break;
        }
    } while (input);
    return 0;
}
