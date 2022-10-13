#include<stdio.h>

int Fn(int a)
{
    if (a == 1)
    {
        return 1 ;
    }
    else if (a == 2)
    {
        return 1 ;
    }
    else
    {
        return (Fn(a-1)%10007) + (Fn(a-2)%10007) ;
    }
    
}

int main()
{
    int a ;
    scanf("%d",&a);
    printf("%d",Fn(a));
    return 0 ;
}