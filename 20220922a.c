#include<stdio.h>
#include<math.h>
int a, b, c;
int main()
{
    while (scanf("%d,%d,%d", &a, &b, &c) == 3)
    {
        if (a != 0)
        {
            int p = b*b - 4*a*c ;
            if (p>0)
            {
                double x1 = (-b + sqrt(p))/(2*a);
                double x2 = (-b - sqrt(p))/(2*a);
                printf("%.2lf %.2lf",x1,x2);
            }
            else if (p==0)
            {
                double x = (-b + sqrt(p))/(2*a);
                printf("%.2lf",x);
            }
            else
            {
                printf("x");
            }
        }
        else if (b != 0)
        {
            double x = (-c)/(double)b ;
            printf("%.2lf",x);
        }
        else
        {
            printf("x");
        }    
    }
    return 0 ;
}
