//输入n个整数，使用插入排序算法按从小到大排序，然后输出结果。
//所谓的插入排序是，从空序列开始，执行n趟插入过程，每趟插入过程将一个元素插入到已经有序的序列中。
//直到所有元素插入完成。
#include<stdio.h>
bool num[10000001] = {0} ;
int main()
{
    int max ;
    scanf("%d",&max);
    long sum = 0 ;
    int j = 2 ;
    for (int i = 1; i <= max; i++)
    {
        num[i] = 1 ;
    }
    int t = 1 ;
    while (j*t <= max)
    {
        for (t = j; t*j <= max; t++)
        {
            if (num[t*j] != 0)
            {
                num[t*j] = 0 ;
            }
        }
        j++ ;
        while (num[j] == 0 && j <= max)
        {
            j++ ;
        }
        t = j ;
    }
    for (int i = 2; i <= max; i++)
    {
        if (num[i] == 1)
        {
            sum += i ;
        }
    }
    printf("%ld",sum);
    return 0 ;
}