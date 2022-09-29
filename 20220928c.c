//返回奇数
#include<stdio.h>

int countOdds(int low, int high)
{
    int count = 0 ;
    for ( int i = low ; i <= high; i++)
    {
        if (i%2 == 1)
        {
            count++;
        } 
    }
    return count;
}

int main()
{
    int low, high;
    scanf("%d%d",&low,&high); 
    printf("%d",countOdds(low,high));
}