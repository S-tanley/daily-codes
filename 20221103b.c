#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int n ;
        int count = 0, a = 0, b = 0, c = 0;
        scanf("%d",&n);
        while (a != 4 )
        {
            if (b == 3 && c == 6)
            {
                a++;
                b = 0;
                c = 0;
            }
            else if (c == 6 && b != 3)
            {
                b++;
                c = 0;
            }
            else
            {
                c++;
            }
            if (a+b+c == n)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}