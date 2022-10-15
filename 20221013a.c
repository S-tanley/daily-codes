//插入排序
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
    for (int i = 0; i < time; i++)
    {
        int t = 0 ;
        for (int j = i-1; j >= 0; j--)
        {
            if (i == 0)
            {
                break ;
            }
            else if (num[j] >= num[j+1])
            {
                break ;
            }
            else
            {
                t = num[j] ;
                num[j] = num[j+1];
                num[j+1] = t ;
            }
            
        }
        for (int j = i; j >= 0; j--)
        {
            printf("%d ",num[j]) ;
        }
        printf("\n") ;
    }
    return 0 ;
}

