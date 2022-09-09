//九九乘法表
#include<stdio.h>
int main()
{
    int y ,x;
    for ( y = 1 ; y < 10 ; y++)
    {
        printf("\n1 * %d = %d",y ,1*y);
        for ( x=2; x <= y; x++)
        {
            if (y == 1)
            {
                ;
            }
            else
            {
                printf("  %d * %d = %-2d",x ,y, x*y);
            }
            
        }
        
    }
    return 0 ;
}