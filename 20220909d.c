//设计一个程序，可以输出输入的众多单词里最长的三个，如果并列则全部输出
#include<stdio.h>
void Strcopy (char x[],char y[])
{
    for ( int i = 0; i < 100; i++)
    {
        y[i] = x[i];
    }  
}
void Empty(char x[])
{
    for (int i = 0; i < 100; i++)
    {
        x[i] = 0;
    }   
}
int main()
{
    char a[100] ;
    int m = 0 ,n ;
    char ch1[100] = {0};
    char ch2[100] = {0};
    char ch3[100] = {0};
    char ch4[100] = {0};
    int size1=0,size2=0,size3=0,size4=0;
    while ((n = getchar())!= EOF)
    {
        if ((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
        {
            a[m] = n ;
            m++;
        }
        else if ((n==' '||n =='\n'||n == '\t') && m!=0)
        {
            Strcopy(a,ch1);
            size1 = m ;
            Empty(a);
            m = 0 ;
            if (size1>size2)
            {
                Strcopy(ch1,ch2);
                size2 = size1; 
                char tem[100] = {0};
                Strcopy(tem,ch1);
                size1 = 0;
            }
            if (size2>size3)
            {
                char tem[100] = {0};
                Strcopy(ch3,tem);
                Strcopy(ch2,ch3);
                Strcopy(tem,ch2);
                int tem2 ;
                tem2 = size3;
                size3 = size2;
                size2 = tem2;
            }
            if (size3>size4)
            {
                char tem[100] = {0};
                Strcopy(ch4,tem);
                Strcopy(ch3,ch4);
                Strcopy(tem,ch3);
                int tem2;
                tem2 = size4;
                size4 = size3;
                size3 = tem2;
            }   
        }
    }
    printf("最长单词为：%s\n",ch4);
    printf("第二长单词为：%s\n",ch3);
    printf("第三长单词为：%s\n",ch2);
    return 0 ;
}