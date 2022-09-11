//函数递归求斐波那契数列
#include<stdio.h>
int count ;
int F(n)
{
    if (n==3)
    {
        count++;
    }
    if (n<=2)
    {
        return 1 ;
    }
    else 
    {
        return F(n-1)+F(n-2);
    }
    
}
int main()
{
    int n ;
    scanf("%d",&n);
    printf("%d\n",F(n));
    printf("%d",count);
    return 0 ;
}