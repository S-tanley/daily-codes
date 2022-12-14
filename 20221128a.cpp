//计算整数的平方根。
#include<stdio.h>
#include<math.h>
int main()
{
    int times;
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        int num;
        double final;
        scanf("%d",&num);
        if (num<0)
        {
            printf("ERROR\n");
            continue;
        }
        else
        {
            final = sqrt(num);
            printf("%.2lf\n",final);
        }
    }
    return 0;
}