#include<stdio.h>
int main()
{
    int i = 0 ;
    char a  ;
    while ((a = getchar()) != '\n')
    {
        i++ ;
    }
    printf("%d\n",i);
    return 0 ;
}