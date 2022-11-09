#include<stdio.h>
int main()
{
    int m, t;
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        int arr[1000] = {0};
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 1000; i++)
        {
            scanf("%d",&arr[i]);
            if (arr[i] == 0)
            {
                t = i;
                break;
            }
        }
        for (int i = 0; i < t; i++)
        {
            sum1 += arr[i];
            sum2 += i+1;
        }
        sum2 += t+1;
        printf("%d\n",sum2-sum1);
    }
    return 0;
}