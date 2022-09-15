//三子棋
#include"game.h"
void Cboard(char x[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for ( int m = 0; m < COL; m++)
        {
            x[i][m] = ' ';
        }
    }
}

void Pboard(char x[ROW][COL])
{
    printf(" ");
    for (int i = 0; i < COL; i++)
    {
        printf(" %d  ",i+1);
    }
    printf("\n");
    for (int i = 0; i < ROW; i++)
    {
        printf("%d",i+1);
        for (int j = 0; j < COL; j++)
        {
            printf(" %c ",x[i][j]);
            if (j<COL-1)
            {
                printf("|");
            }
        }
        printf("\n ");
        if (i<ROW-1)
        {
            for (int j = 0; j < ROW; j++)
            {
                printf("---");
                if (j<COL-1)
                {
                    printf("|");
                }
            } 
            printf("\n");
        }
    }
}

void Player(char t[ROW][COL])
{
    int x, y ;
    printf("玩家走棋\n");
    while (1)
    {
        printf("请输入坐标(先输入行在输入列)\n");
        scanf("%d%d",&x,&y);
        if (x>0 && x<=3 && y>0 && y<=3 && (t[x-1][y-1] == ' ') )
        {
            t[x-1][y-1] = '*';
            break;
        }
        else
        {
            printf("坐标错误或已被占用,  请重新输入\n");
        }
    }
}

void Computer(char t[ROW][COL])
{
    int x,y ;
    printf("电脑走棋\n");
    while (1)
    {
        x = rand()%ROW;
        y = rand()%ROW;
        if (t[x][y] == ' ')
        {
            (t[x][y] = '#');
            break;
        } 
    }
}

char Judge(char t[ROW][COL])
{
    if (t[0][0]==t[1][1] && t[1][1]==t[2][2])
    {
        return t[0][0];
    }
    if (t[0][2]==t[1][1] && t[1][1]==t[2][0])
    {
        return t[0][2];
    }
    for (int i = 0; i < ROW; i++)
    {
        int j, d = 0 ;
        if (t[i][0] == t[i][1] && t[i][1]==t[i][2])
        {
            return t[i][0];
        }
        if (t[0][i]==t[1][i] && t[1][i]==t[2][i])
        {
            return t[0][i];
        }
        if (d==0)
        {
            for (j = 0; j < COL; j++)
            {
                if (t[i][j]==' ')
                {
                    d = COL ;
                    break;
                }
                else if (i==2 && j==2)
                {
                    return 'p' ;
                }
            }
        }
        
    }
    return ' ' ;
}

void game()
{
    char z ;
    char board[ROW][COL] = {0};
    Cboard(board) ;
    Pboard(board) ;
    while (1)
    {
        Player(board);
        if (Judge(board) != ' ')
        {
            z = Judge(board) ;
            break;
        }
        Computer(board);
        Pboard(board);
        if (Judge(board) != ' ')
        {
            z = Judge(board) ;
            break;
        }
    }
    if (z =='#')
    {
        printf("你输了,是否再来一局\n");
    }
    else if (z =='*')
    {
        Pboard(board);
        printf("你赢了,是否再来一局\n");
    }
    else
    {
        printf("平局,是否再来一局\n");
    }
}

void menu()
{
    printf("************************\n");
    printf("***  1.play  0.exit  ***\n");
    printf("************************\n");
}

int main()
{
    srand((unsigned int)time(NULL));
    int input ;
    do
    {
        printf("已进入五子棋游戏\n");
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch (input)
        {
        case 1 :
        printf("开始游戏\n");
        game();
            break;
        case 0 :
        printf("已退出\n");
            break;
        default:
        printf("请重新选择\n");
            break;
        }
    } while (input);
    return 0 ;
}