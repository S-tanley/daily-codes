//函数循环求斐波那契数列
#include<stdio.h>
int F(int n)
{
    int c ;
    if (n<=2)
    {
        return 1;
    }
    else if (n>2)
    {
        int a = 1;
        int b = 1;
        c = a + b ;
        for (int i = 3; i < n; i++)
        {
            a = b;
            b =c;
            c = a +b;
        }
        
    }  
    return c ;
}
int main()
{
    int n ;
    scanf("%d",&n);
    printf("%d\n",F(n));
    return 0 ;
}