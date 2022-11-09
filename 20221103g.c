#include<stdio.h>
int C[3001][3001] = {0} ;

void Change(int C[3001][3001], int i, int j)
{
    if (j == 0 )
    {
        C[i][j] = 1 ;
    }
    else if (j == 1)
    {
        C[i][j] = i ;
    }
    else if (i == j)
    {
        C[i][j] = 1 ;
    }
    else
    {
        C[i][j] = (C[i-1][j-1] + C[i-1][j]) % 1000007 ;
    }
}

int main()
{
    for (int i = 1; i < 3001; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            Change(C,i,j) ;
        }
    }
    int n, m;
    while (scanf("%d%d", &n, &m) == 2)
    {
        printf("%d\n",C[n][m]);
    }
    return 0 ;
}