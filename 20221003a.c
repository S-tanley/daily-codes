//分别打印一个整数奇数位与偶数位的二进制位
#include<stdio.h>

void Bit(int a)
{
    printf("奇数位：");
    for (int i = 30; i >= 0; i -= 2)
    {
        printf("%d",(a>>i)&1) ;
    }
    
    printf("\n偶数位: ") ;
    for (int i = 31; i >= 1; i -= 2)
    {
        printf("%d",(a>>i)&1) ;
    }
}

int main()
{
    int a ;
    scanf("%d",&a) ;
    Bit(a) ;
}