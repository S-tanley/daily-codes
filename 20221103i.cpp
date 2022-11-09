#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    int x = 0;
    scanf("%d",&t);
    for (int j = 0; j < t; j++)
    {
        char a[502] = {0};
        char b[502] = {0};
        for (int i = 0; i < 501; i++)
        {
            a[i] = '0';
            b[i] = '0';
        }
        char c[502] = {0};
        int A, B;
        scanf("%s",a);
        scanf("%s",b);
        A = strlen(a);
        B = strlen(b);
        int x = 0;
        if (A>=B)
        {
            for (int i = A-1, k = B-1; i >= 0; i--, k--)
            {
                if (k<0)
                {
                    if (a[i] - '0' + x >= 10)
                    {
                        a[i] = a[i]  + x - 10;
                        x = 1;
                    }
                    else
                    {
                        a[i] = a[i] + x ;
                        x = 0;
                    }
                }
                else
                {
                    if (a[i] + b[k] - 2*'0' + x >= 10)
                    {
                        a[i] = a[i] + b[k] - '0' + x - 10;
                        x = 1;
                    }
                    else
                    {
                        a[i] = a[i] + b[k] + x - '0';
                        x = 0;
                    }
                }
            }
            if (x==1)
            {
                printf("1");
            }
            printf("%s\n",a);
        }
        else
        {
            for (int i = A-1, k = B-1; k >= 0; i--, k--)
            {
                if (i<0)
                {
                    if (b[k] - '0' + x >= 10)
                    {
                        b[k] = b[k] + x - 10;
                        x = 1;
                    }
                    else
                    {
                        b[k] = b[k] + x;
                        x = 0;
                    }
                }
                else
                {
                    if (a[i] + b[k] - 2*'0' + x >= 10)
                    {
                        b[k] = a[i] + b[k] - '0' + x - 10;
                        x = 1;
                    }
                    else
                    {
                        b[k] = a[i] + b[k] + x - '0';
                        x = 0;
                    }
                }
            }
            if (x==1)
            {
                printf("1");
            }
            printf("%s\n",b);
        }
    }
    return 0 ;
}