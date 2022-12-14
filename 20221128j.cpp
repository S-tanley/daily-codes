//找出整数序列中第二小的数。
#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    for ( int i = 0; i < n; i++)
    {
        int  m;
        int num[100] = {0};
        int first = 0, second = 0;
        scanf("%d",&m);
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&num[j]);
        }
        first = num[0];
        for (int j = 0; j < m; j++)
        {
            if (first > num[j])
            {
                first = num[j];
            }
            else
            {
                second = num[j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (num[j] > first && num[j] < second)
            {
                second = num[j] ;
            }
        }
        if (first == second)
        {
            printf("ERROR\n");
        }
        else
        {
            printf("%d\n",second);
        }
    }
    return 0;
}