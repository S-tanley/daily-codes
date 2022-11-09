//将数组中的0移到末尾。
#include<stdio.h>

void exchange(int arr[],int j,int m)
{
    for (; j < m-1; j++)
    {
        int t ;
        t = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t ;
    }
}

int main()
{
    int t ;
    scanf("%d",&t) ;
    int m,n;
    
    int arr[10000] = {0};
    for (int i = 0; i < t; i++)
    {
        
        scanf("%d",&m);
        n = m ;
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[j]) ;
        }
        for (int j = 0; j < m; j++)
        {
            if (arr[j] == 0)
            {
                exchange(arr,j,m) ;
                j--;
                m--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n") ;
        int arr[10000] = {0};
    }
    
    return 0 ;
}