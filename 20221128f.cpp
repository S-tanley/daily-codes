//计算n个不同整数的所有的组合
#include<stdio.h>
int main()
{
    int times;
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        int arr[11] = {0};
        bool check[11] = {0};
        int num;
        scanf("%d",&num);
        for (int ia = 1; ia <= num; ia++)
        {
            int k;
            scanf("%d",&k);
            arr[ia] = k;
        }
        int row = 1;
        for (int ia = 1; ia <= num; ia++)
        {
            row *= 2;
        }
        for (int ia = 0; ia < row; ia++)
        {
            int tem = ia;
            for (int ib = num; ib >= 1; ib--)
            {
                check[ib] = tem & 1;
                tem = tem >> 1;
            }
            printf("--> ");
            for (int ib = 1; ib <= num; ib++)
            {
                if (check[ib] == 0)
                {
                    printf("%d ",arr[ib]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}