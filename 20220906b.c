//计算n的阶乘
#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int i = n ;
    for(;(n-1)!= 0;n--)
    {
        i = i*(n-1) ;
    }
    printf("%d\n",i);
    return 0 ;

}