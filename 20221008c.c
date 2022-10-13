#include<stdio.h>
int main() 
{
    int m, n;
    while (scanf("%d%d", &m, &n) == 2) 
    {
        // 进行计算
        printf("%d\n",m*n - (m+n));
    }
    return 0;
}