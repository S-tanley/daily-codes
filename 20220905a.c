#include <stdio.h>
int main() 
{
    int k = 0 , tab = 0 , h = 0 ;
    char a ;
    while ((a = getchar()) != EOF)
    {
        if (a == ' ')
        {
            k++;
        }
        else if (a == '\n')
        {
            h++;
        }
        else if (a == '\t')
        {
            tab++;
        }
        
    }
    printf("空格键有%d个,回车键有%d个,制表符有%d个",k,h,tab);
    return 0;
}