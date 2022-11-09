#include<stdio.h>

int C(int n ,int m)
{
    if (m == 0 )
    {
        return 1 ;
    }
    else if (m == 1)
    {
        return n ;
    }
    else if (m == n)
    {
        return 1 ;
    }
    else
    {
        return (C(n-1,m-1)%1000007 + C(n-1,m)%1000007)%1000007 ;
    }
}

int main()
{
    for (int i = 0; i <= 5000; i++)
    {
        int n, m ;
        scanf("%d%d",&n,&m) ;
        if (n-m < m)
        {
            m = n-m ;
        }
        printf("%d\n",C(n,m)) ;
    }
    return 0 ;
}