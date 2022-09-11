//猜数字
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void mune()
{
    printf("**************************\n");
    printf("***  1.play    2.exit  ***\n");
    printf("**************************\n");
}
void game()
{
    printf("请输入猜测数字:");
    int num = rand()%100+1;
    int guess ;
    while (1)
    {
        scanf("%d",&guess);
        if (guess > num)
        {
            printf("大了");
        }
        else if (guess<num)
        {
            printf("小了");
        }
        else
        {
            printf("猜对了！\n是否继续进行游戏\n");
            break;
        } 
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int input ;
    do
    {
        mune();
        printf("请选择是否进行游戏：");
        scanf("%d",&input);
        switch (input)
        {
        case 0:
            break;
        case 1 :
            game();
            break;
        default:
            break;
        } 
    } while (input==1);
    printf("已退出");
    return 0 ;
}    