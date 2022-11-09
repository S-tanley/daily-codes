#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int man = 0, woman = 0, kid = 0;
        while (man < x+1)
        {
            if (woman == x )
            {
                man++;
                woman = 0;
                kid = 0;
            }
            else if (kid == x && woman != x)
            {
                woman++;
                kid = 0;
            }
            else
            {
                kid++;
            }
            if (3*man + 2*woman + kid == y && man+woman+kid == x)
            {
                printf("%d %d %d\n", man, woman, kid);
            }
        }
    }
    return 0;
}