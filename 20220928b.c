//从若干数据中选择能操作最少步骤的数据拼成等边三角形
#include<stdio.h>
void Px(int arr[],int a)
{
    for (int j = 0; j < a-1; j++)
    {
        for (int i = 0; i < a-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int t ;
                t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t ;
            }
        }
    }  
}

int Choose(int arr[],int a)
{
    int c1 = 0,c2 = 1000000001;
    for (int i = 0; i < a-2; i++)
    {
        int t1,t2;
        t1 = arr[i+1]-arr[i];
        t2 = arr[i+2]-arr[i+1];
        c1 = t1 + t2;
        if (c1<c2)
        {
            c2 = c1;
        }
    }
    return c2 ;
}

int main()
{
    int a;
    int arr[301] = {0};
    scanf("%d",&a);
    for (int z = 0; z < a; z++)
    {
        int b ;
        scanf("%d",&b);
        for (int i = 0; i < b; i++)
        {
            int t ;
            scanf("%d",&t);
            arr[i] = t;
        }
        Px(arr,b);
        printf("%d\n",Choose(arr,b));
    }
    return 0 ;
}