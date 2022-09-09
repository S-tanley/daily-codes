//设计一个函数，strcopy，实现可以把一个字符串的所有字符复制给另一个字符串
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
    int n ;
    int m = 0 ;
    while ((n = getchar())!= '\n')
    {
        a[m] = n ;
        m++;
    }
    char b[1000] = {0};
    Strcopy(a,b);
    printf("%s\n",b);
    return 0 ;
}