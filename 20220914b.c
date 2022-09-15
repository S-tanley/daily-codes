//设计一个程序，将输入的所有制表符转换成若干空格，并输出，使输入输出视觉效果不变
//直接输出版
#include<stdio.h>
int main()
{
    char a[100] = {0};
    for (int i = 0; a[i] != EOF ; i++)
    {
        a[i] = getchar() ;
    }
    int b = 0 ;
    for (int i = 0; i < 100 ; i++)
    { 
        if (a[i]=='\t')
        {
            for (int j = b ; j < i; j++)
            {
                printf("%c",a[j]);
            }
            int c = (i - b)%8 ;
            for (int j = 0; j < 8-c ; j++)
            {
                printf("%c",' ');
            }
            b = i + 1 ;
        }
        else if (a[i]=='\n')
        {
            for (int j = b ; j <= i; j++)
            {
                printf("%c",a[j]);
            }
            b = i + 1 ;
        }
    }
    return 0 ;
}