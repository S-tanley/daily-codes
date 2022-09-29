//设计一个函数average(int* score, int scoreSize)，其中score是一个一维整数数组，scoreSize是score数组的长度，返回score数组去掉最低分和最高分后的平均值（浮点数）
#include<stdio.h>

double average(int* score, int scoreSize)
{
    int i =  scoreSize ;
    for (int k = 0; k < scoreSize-1; k++)
    {
        for (int j = 0; j < i-1; j++)
        {
            if (score[j]>score[j+1])
            {
                int t ;
                t = score[j];
                score[j] = score[j+1];
                score[j+1] = t ;
            }
        }
        i--;
    }
    int sum = score[1];
    for (int i1 = 2; i1 < scoreSize-1; i1++)
    {
        sum = sum + score[i1] ;
    }
    double ave = (double)sum/(scoreSize-2);
    return ave ;
}

int main()
{
    int score[100] = {0};
    int scoreSize = 0, i = 0, a ;
    scanf("%d",&a);
    while (a != -1)
    {
        score[i] = a ;
        i++;
        scanf("%d",&a);
    }
    scoreSize = i ;
    printf("%lf",average(score,scoreSize));
    return 0 ;
}