//倒置字符串
#include<stdio.h>
void S (char x[],char y[])
{
    int length = 0 ;
    for ( int i = 0; i < 100; i++)
    {
        if (x[i] != '\0')
        {
            length++;
        }
        else
        {   
            break;
        }
    }
    for (int i = 0; i < length/2 ; i++)
    {
        if (length/2 != 0)
        {
            y[length/2]=x[length/2];
        }
        y[i] = x[length -1 -i];
        y[length -1 - i] = x[i];
    }
}
int main()
{
    char a[100] ;
    char d[100] = {0};
    int m = 0 ,n ;
    while ((n = getchar())!= '\n')
    {
        a[m] = n ;
        m++;
    }
    S(a,d);
    printf("%s\n",d);
    return 0 ;
}
