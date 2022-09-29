//返回奇数
#include<stdio.h>

int countOdds(int low, int high)
{
    if (low%2 == 1)
    {
        low--;
    }
    if (high%2 == 1)
    {
        high++;
    }
    return (high-low)/2;
}

int main()
{
    int low, high;
    scanf("%d%d",&low,&high); 
    printf("%d",countOdds(low,high));
}