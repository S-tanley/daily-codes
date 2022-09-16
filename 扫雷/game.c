#include"game.h"

void Init(char x[ROWS][COLS],char y)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            x[i][j] = y ;
        }
    }
}

void Pboard(char x[ROWS][COLS])
{
    printf("  ");
    for (int i = 1; i < ROW+1; i++)
    {
        printf("%d ",i);
    }
    printf("%c",'\n');
    for (int i = 0; i < ROW; i++)
    {
        printf("%d ",i+1);
        for (int j = 0; j < COL; j++)
        {
            printf("%c ",x[i+1][j+1]);
        }
        printf("%c",'\n');
    }
}

void Cboom(char x[ROWS][COLS])
{
    for (int t = 0; t < E_NBOOM; t++)
    {       
        int i = rand()%ROW+1;
        int j = rand()%COL+1;
        if (x[i][j] != '1')
        {
            x[i][j] = '1';
        }
        else
        {
            t--;
        }
    }
}

void C_BOOM(char x[ROWS][COLS], char y[ROWS][COLS],int i,int j)
{
    if (i>0 && i<=ROW && j>0 && j<=COL && y[i][j]=='*')
    {
        int c=0;
        for ( int a = i-1; a <= i+1 ; a++)
        {   
            for (int b = j-1; b <= j+1; b++)
            {
                if(x[a][b] == '1') 
                {
                    c++;
                }        
            } 
        }   
        y[i][j] = c+48 ;
        if (c==0)
        {
            y[i][j] = 32 ;
            for ( int a = i-1; a <= i+1 ; a++)
            {
                for (int b = j-1; b <= j+1; b++)
                {
                    C_BOOM(x,y,a,b);
                } 
            }
        }   
    }   
}

int Check(char x[ROWS][COLS],char y[ROWS][COLS])
{
    printf("请输入排查坐标\n");
    int i,j;
    while (1)
    {
        scanf("%d%d",&i,&j);
        if (i>0 && i<=ROW && j>0 && j<=COL && y[i][j]=='*')
        {
            if (x[i][j] == '1')
            {
                printf("game over ,you lose\n");
                return 0 ;
            }
            else
            {          
            C_BOOM(x,y,i,j) ;
            return 1 ;
            }
        } 
        else
        {
            printf("坐标不合法,请重新输入\n");
        }
    }   
}

void game()
{
    char view[ROWS][COLS] = {0} ;
    char board[ROWS][COLS] = {0} ;
    int t = 0 ;
    Init(board,'0');
    Cboom(board);
    Init(view,'*');
    Pboard(view);
    while (1)
    {
        t=0;
        switch (Check(board,view))
        {
        case 0:
        Pboard(board);
        goto again;
            break;
        case 1:
        Pboard(view);
            break;
        } 
        for (int i = 1; i <=ROW; i++)
        {
            for (int j = 1; j <= COL; j++)
            {
                if (view[i][j]=='*')
                {
                    t++;
                }
            }
        }
        if (t == E_NBOOM)
        {
            printf("you win");
            break;
        }
        
    }
    again :
    printf("是否再来一局\n");
}

void menu()
{
    printf("*****************************\n");
    printf("****  1.play     0.exit  ****\n");
    printf("*****************************\n");
}

int main()
{
    int input = 0 ;
    srand((unsigned int)time(NULL));
    printf("进入扫雷\n");
    do
    {
        menu();
        scanf("%d",&input);
        switch (input)
        {
        case 0 :
            printf("已退出游戏\n");
            break;
        case 1 :
            game();
            break;
        default:
            printf("输入错入，请重新选择\n");
            break;
        }
    } while (input);
    
    return 0 ;
}