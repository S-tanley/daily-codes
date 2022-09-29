//两个数的最大公约数
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int time;
    scanf("%d",&time);
    for (  int i = 0;  i < time;  i++)
    {
        int a,b ;
        scanf("%d%d",&a,&b);
        if (b>a)
        {
            int t;
            t = a;
            a = b;
            b = t;
        }
        while (a%b && b != 1)
        {
            a = abs(a-b) ;
            if (b>a)
            {
                int t;
                t = a;
                a = b;
                b = t;
            }
        }
        if (b == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("%d\n",b); 
        } 
    }
    return 0 ;
}