//水仙花数
#include <stdio.h>
int main() 
{
    int n, t;
    scanf("%d", &n);  // 有n组数据
    for (t = 0; t < n; t++) 
    {
        int count = 0,a ,b ;
        scanf("%d%d",&a,&b);
        for (int i = a; i <= b; i++)
        {
            int g,s,b ;
            g = i/1%10 ;
            s = i/10%10 ;
            b = i/100%10 ;
            if (i == b*b*b+s*s*s+g*g*g)
            {
                printf("%d ",i);
                count++;
            }
        }
        if (count == 0)
        {
            printf("-1");
        }
        printf("\n");  
    }
    return 0;
}