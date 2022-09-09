#include<stdio.h>
int Power(int x,int y)
{   int a = 1 ;
    for (int i = 1 ; i < y+1; i++)
    {
        a = a * x ;
    } 
    return a ;  
}
int main()
{
    int b,c ;
    scanf("%d%d",&b,&c);
    printf("%d的%d次方是%d",b,c,Power(b,c));
    return 0 ;
}