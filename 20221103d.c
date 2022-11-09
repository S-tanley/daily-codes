#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        double n;
        scanf("%lf",&n);
        if (n<0)
        {
            printf("error\n");
        }
        else if (n == 0)
        {
            printf("%.5lf\n",n);
        }
        else
        {
            double x1 = n/2, x2;
            x2 = (1.0/2)*(x1+n/x1);
            while (fabs(x2-x1)>=0.00001)
            {
                x1 = x2;
                x2 = (1.0/2)*(x1+n/x1);
            }
            printf("%.5lf\n",x2);
        }
    }
    return 0;
}