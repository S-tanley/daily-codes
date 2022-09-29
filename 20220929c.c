//分数化小数
#include<stdio.h>

void My_round(int number[],int remain,int c) 
{
    if (remain >= 5)
    {
        number[c]++;
    }
}

int main()
{
    int all ;
    int number[1001] = {0};
    scanf("%d",&all);
    int a,b,c;
    for (int j = 0; j < all; j++)
    {
        scanf("%d%d%d",&a,&b,&c);
        int t = a/b ;
        int remain = a%b ;
        number[0] = t ;
        for (int i = 1; i <= c; i++)
        {
            number[i] = (remain*10)/b ;
            remain = (remain*10)%b ;
        }
        remain = (remain*10)/b ;
        My_round(number,remain,c);
        for (int i = c; i > 0; i--)
        {
            if (number[i] == 10)
            {
                number[i] = 0;
                number[i-1]++;
            }
            else
            {
                break;
            }
        }
    printf("%d",number[0]);
    printf(".");
    for (int i = 1; i <= c; i++)
    {
        printf("%d",number[i]);
    }
    printf("\n");
    }
    return 0 ;
}
