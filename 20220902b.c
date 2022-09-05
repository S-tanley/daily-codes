#include<stdio.h>
int main()
{
    printf("华氏度\t摄氏度\n");
    int a ;
    float b ;
    for (a = 0; a < 301; a = a + 20) 
    {
        b = (a-32)/1.8 ;
        printf("%d\t%.1f\n",a,b) ;
    }
    
    
    return 0 ;
}