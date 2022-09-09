//可以输出输入的众多单词里最长的一个，输入的内容以空格，制表符或换行符来分割单词，如果并列最长，只需要输出一个即可
#include<stdio.h>
void Strcopy (char x[],char y[])
{
    for ( int i = 0; i < 1000; i++)
    {
        y[i] = x[i];
    }  
}
int main()
{
    char a[1000] ;
    int n,m,i ;
    m = 0 ,i = 0 ;
    char ch1[1000] = {0};
    char ch2[1000] = {0};
    int size1 = 0;
    int size2 = 0;
    while ((n = getchar())!= EOF)
    {
        if ((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
        {
            a[m] = n ;
            m++;
        }
        else if ((n==' '||n =='\n'||n == '\t') && i!=1 && m!=0)
        {
            Strcopy(a,ch1);
            size1 = m ;
            m = 0 ;
            i++;
        }
        else if ((n==' '||n =='\n'||n == '\t') && i==1 && m!=0)
        {
            Strcopy(a,ch2);
            size2 = m ;
            m = 0 ;
            i++;
        }
        if (size1>size2)
        {
            Strcopy(ch1,ch2);
        }
        
    }
    printf("%s\n",ch2);
    return 0 ;
}