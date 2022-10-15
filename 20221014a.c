//在一个m*n的数组中，按照Zig-Zag的顺序依次填写1,2,3,...m*n1,2,3,...m*n。
#include<stdio.h>

void Right(int num[101][101],int row,int* p_col,int* p_i)
{
    (*p_col)++ ;
    num[row][*p_col] = *p_i ;
    (*p_i)++ ;
}

void Down(int num[101][101],int* p_row,int col,int* p_i)
{
    (*p_row)++ ;
    num[*p_row][col] = *p_i ;
    (*p_i)++ ;
}

void LeftDown(int num[101][101],int* p_row,int* p_col,int* p_i)
{
    (*p_col)-- ;
    (*p_row)++ ;
    num[*p_row][*p_col] = *p_i ;
    (*p_i)++ ;
}

void RightUp(int num[101][101],int* p_row,int* p_col,int* p_i)
{
    (*p_col)++ ;
    (*p_row)-- ;
    num[*p_row][*p_col] = *p_i ;
    (*p_i)++ ;
}

int main()
{
    int num[101][101] = {0};
    int m, n, i ;
    scanf("%d%d",&m,&n) ;
    int row = 1, col = 1 , c_r = 0, c_d = 0, c_ld = 0, c_rp = 0;
    for (i = 1; i <= m*n; )
    {
        if (i == 1)
        {
            num[row][col] = i ;
            i++ ;
            Right(num,row,&col,&i) ;
            c_r++ ;
        }
        if (c_r != 0)
        {
            if (row == 1)
            {
                while (col != 1 && row != m)
                {
                    LeftDown(num,&row,&col,&i) ;
                }
                c_r = 0 ;
            }
            else if (row == m)
            {
                while (row != 1 && col != n)
                {
                    RightUp(num,&row,&col,&i) ;
                }
                c_r = 0 ;
            }
        }
        if (c_d == 0)
        {
            if (row == m && c_r == 0)
            {
                Right(num,row,&col,&i) ;
                c_r++ ;
            }
            else if(col == 1 || col == n)
            {
                Down(num,&row,col,&i) ;
                c_d++ ;
            }
        }
        if (c_d != 0)
        {
            if (col == 1)
            {
                while (row != 1 && col != n)
                {
                    RightUp(num,&row,&col,&i) ;
                }
                c_d = 0 ;
            }
            else if (col == n)
            {
                while (row != m && col != 1)
                {
                    LeftDown(num,&row,&col,&i) ;
                }
                c_d = 0 ;
            }
        }
        if (c_r == 0)
        {
            if (col == n)
            {
                Down(num,&row,col,&i) ;
                c_d++ ;
            }
            else if(row == 1 || row == m)
            {
                Right(num,row,&col,&i) ;
                c_r++ ;
            }
        } 
    }
    for (i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",num[i][j]) ;
        }
        printf("\n");
    }
    return 0 ;
}