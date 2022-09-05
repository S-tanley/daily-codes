#include<stdio.h>
int main()
{
    printf("华氏度\t摄氏度\n");
    int a = 0;
    while (a<301)
    {
        float b = (a-32)/1.8 ;
        printf("%d\t%.1f\n",a,b);
        a = a + 20 ;
    }
    return 0 ;
}