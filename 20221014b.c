//已知n个人（以编号1,2,3,...,n1,2,3,...,n分别表示）围坐在一张圆桌周围。
//从编号为k的人开始报数，数到m的那个人出列；他的下一个人又从1开始报数，数到m的那个人又出列；
//依此规律重复下去，直到圆桌只剩下2个人，请问这两个人的编号分别是多少？
#include<stdio.h>

void circle(int People[],int n,int m,int k,int t)
{
    int i ;
    int x = m ;
    for (i = 0; i < m; i++)
    {
        if (People[k+i] != 0)
        {
            if (k+i == n && i != m-1)
            {
                k = k - n ;
            }
        }
        else
        {
            m++ ;
            if (k+i == n && i != m-1)
            {
                k = k - n ;
            }
        }
    }
    People[k+i-1] = 0 ;
    t++ ;
    if (t != n-2 )
    {
        if (k+i == n+1)
        {
            k = k - n ;
        }
        circle(People,n,x,k+i,t) ;
    }
}

int main()
{
    int n,k,m,t = 0 ;
    scanf("%d%d%d",&n,&k,&m) ;
    int People[101] ;
    for (int i = 1; i <= n; i++)
    {
        People[i] = i ;
    }
    circle(People,n,m,k,t) ;
    for (int i = 1; i <= n; i++)
    {
        if (People[i] != 0)
        {
            printf("%d ",i) ;
        }
    }
    return 0 ;
}