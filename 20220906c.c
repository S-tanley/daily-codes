//计算1！+2！+……+10！
#include<stdio.h>
int main()
{
    int i ;
    int m = 0 ;
    for ( i = 1; i < 11; i++)
    {
        int n = i;
        int k = i;
        for(;(k-1)!= 0;k--)
        {
            n = n *(k-1) ;
        }
        m = m + n ;
    }
    printf("%d",m);
    return 0 ;
}