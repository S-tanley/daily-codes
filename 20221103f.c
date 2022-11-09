#include<stdio.h>
int main()
{
    int n ,m ,mynew ;
    int M[3001] = {0} ;
    int count ;
    for (int k = 0; k < 5000; k++)
    {
        
        scanf("%d%d",&n,&m) ;
        count = 0 ;
        if (m == 1 )
        {
            count = n-1 ;
            goto end ;
        }
        else if ((m == n && n != 0 )|| m == 0)
        {
            goto end ;
        }
    
        for (int i = 1; i <= m; i++)
        {
            M[i] = i ;
        }
        while (M[1] != n-m+1)
        {
            while (M[m] != n+1)
            {
                M[m]++;
                count++;
            }
            for (int i = 1; i <= m-1; i++)
            {
                if (M[m-i] != n-i)
                {
                    M[m-i]++;
                    mynew = m-i ;
                    break;
                }
            }
            for (int i = mynew+1; i <= m ; i++)
            {
                M[i] = M[i-1] + 1 ;
            }
            if (count >= 1000007)
            {
                count %= 1000007 ;
            }
        }
        end : ;
        count++ ;
        printf("%d",count%1000007) ;
    }
    return 0 ;
}