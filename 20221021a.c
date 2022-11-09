//牛牛有 n 堆石子，编号分别为 1,2,…,n1,2,…,n。每堆上有若干个石子，石子总数必为 n 的倍数。可以在任一堆上取若干石子，然后移动。
//移动规则：每次移动只能将某堆石子中的若干石子移至相邻的两堆石子中的其中一堆。特别地对于第 1 堆石子只能移动石子到第 2 堆，第 n 堆石子只能移动石子到第 n−1 堆。
//请找到一种移动方法，让牛牛用最少的移动次数使每堆石子上的石子数都一样多。
#include<stdio.h>
int main()
{
    int n ,average ,left ,right ;
    int sum = 0 ,count = 0 ;
    int A[10001] = {0} ;
    scanf("%d",&n) ;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&A[i]) ;
        sum += A[i] ;
    }
    average = sum/n ;
    for (int i = 1; i < n; i++)
    {
        if (A[i] != average)
        {
            count++ ;
        }
        A[i+1] += A[i] - average ;
    }
    printf("%d\n",count) ;
    return 0 ;
}