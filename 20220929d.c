//进制转换
#include<stdio.h>
int main()
{
    int time ;
    scanf("%d",&time);
    for (int i = 0; i < time; i++)
    {
        int a,b ;
        int number[15] = {0};
        scanf("%d%d",&a,&b) ;
        int k = 0 ;
        while (a)
        {
            number[k] = a%b ;
            a = a/b ;
            k++;
        }
        if (number[k]==0)
        {
            k--;
        }
        for (int j = k; j >= 0; j--)
        {
            printf("%d",number[j]);
        }
        printf("\n");
    }
    return 0 ;
}