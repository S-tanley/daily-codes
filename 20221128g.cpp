//01串压缩编码
//计算机中的文件都是由一串01串组成的，我们可以通过某种方式压缩它。
#include<stdio.h>
int main()
{
    int str_long;
    bool str[1000][8] = {0};
    scanf("%d",&str_long);
    for (int i = 0; i < str_long/8; i++)
    {
        int num;
        scanf("%d",&num);
        for (int i1 = 7; i1 >= 0; i1--)
        {
            str[i][i1] = num & 1;
            num = num >> 1;
        }
    }
    int flag = -1, final = -1;
    for (int i = 0; i < str_long; i++)
    {
        if (*(&str[0][0]+i) == 0)
        {
            if (final == -1)
            {
                final = 0;
                flag = 0;
            }
            if (flag == 1)
            {
                printf("%d ",final);
                final = 0;
                flag = 0;
            }
            final++;
        }
        else
        {
            if (final == -1)
            {
                final = 128;
                flag = 1;
            }
            if (flag == 0)
            {
                printf("%d ",final);
                final = 128;
                flag = 1;
            }
            final++;
        }
    }
    printf("%d ",final);
    return 0;
}