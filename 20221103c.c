#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int num;
        int count = 0;
        scanf("%d",&num);
        do
        {
            num /= 10;
            count++;
        } while (num);
        printf("%d\n",count);
        
    }
    return 0;
}