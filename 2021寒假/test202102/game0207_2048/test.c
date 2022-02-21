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
            printf("输入有误，请重新输入。\n");
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
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("游戏结束，你的得分是：%d。\n再见！", Scores());
            break;
        default:
            printf("选择有误，请重新选择。\n");
            break;
        }
    } while (input);
    return 0;
}
