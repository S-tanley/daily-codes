//设计一个程序，尽可能的将若干连续空格转换成制表符，并输出，使输入输出视觉不变
//直接输出版
#include<stdio.h>
int main()
{
    char a[100] = {0};
    for (int i = 0; a[i] != EOF ; i++)
    {
        a[i] = getchar() ;
    }
    int b = 0 ,t = 0 , m = 0 ,f = (-1) ;
    for (int i = 0; i < 100 ; i++)
    {
        if (a[i]==' ' && t == 0)
        {
            t++;
        }
        else if (a[i]=='\n' || a[i]=='\t')
        {
            for (int j = b ; j <= i; j++)
            {
                printf("%c",a[j]);
            }
            b = i + 1 ;
            f = i ;
        }
        else if (a[i]!=' ' && t>0 )
        {
            for (int j = b ; j < i; j++)
            {
                if (a[j]!=' ')
                {   
                    putchar(a[j]);    
                }
                else if (a[j]==' ')
                {
                    int c = (j - f)%8 ;
                    m++;
                    if (c==0)
                    {
                        printf("%c",'\t');
                        f = j ;
                        m=0;
                    }
                } 
            }
            if (m!=0)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("%c",' ');
                }
                m = 0 ;
            }
            printf("%c",a[i]);
            b = i + 1 ;
            t = 0 ;
        }
    }
    return 0 ;
}