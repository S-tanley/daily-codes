#include<stdio.h>
int main()
{
    char a ;
    int i = 0 ;
    while ((a = getchar()) != EOF)
    {
        if (a != ' ')
        {
            i = 0 ;
            printf("%c",a);
        }
        else if (i != 0)
        {
            i++;
        }
        else
        {
            printf(" ");
            i++;
        }
    }
    return 0   ; 
    
}

