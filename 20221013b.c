//冒泡排序
#include<stdio.h>
int main()
{
    int time ;
    scanf("%d",&time) ;
    int num[1000] = {0} ;
    for (int i = 0; i < time; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < time-1; i++)
    {
        int t = 0 ;
        for (int j = 0; j <= time-2; j++)
        {
            if (num[j] > num[j+1])
            {
                t = num[j] ;
                num[j] = num[j+1];
                num[j+1] = t ;
            }
        }
        for (int j = 0; j < time; j++)
        {
            printf("%d ",num[j]);
        }
        printf("\n") ;
    }
    return 0 ;
}