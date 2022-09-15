//设计一个程序，尽可能的将若干连续空格转换成制表符，并输出，使输入输出视觉不变
//存入字符串版
#include<stdio.h>
int main()
{
    char a[100] = {0};
    char z[100] = {0};
    for (int i = 0; a[i] != EOF ; i++)
    {
        a[i] = getchar() ;
    }
    int b = 0 ,t = 0 , m = 0 ,f = (-1) , x = 0 ;
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
                z[j-x]=a[j];
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
                    z[j-x] = a[j];    
                }
                else if (a[j]==' ')
                {
                    int c = (j - f)%8 ;
                    m++;
                    if (c==0)
                    {
                        x = x + m - 1 ;
                        z[j-x] = '\t';
                        f = j ;
                        m=0;
                    }
                } 
            }
            if (m!=0)
            {
                for (int j = i - m ; j < i; j++)
                {
                    z[j-x] = ' ' ;
                }
                m = 0 ;
            }
            z[i-x] = a[i];
            b = i + 1 ;
            t = 0 ;
        }
    }
    printf("%s",z);
    return 0 ;
}