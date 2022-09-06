//检测一段英文里有多少个单词，单词的长度，并统计每一种长度的数量，这段话多少个字母，每个字母出现多少次
#include<stdio.h>
int main()
{
    int a,y,i,k,max ;
    i = 0 , k = 0 , max = 0 ;
    int num[100] = {0};
    int t[50] = {0};
    int al[300]={0};
    while ((a = getchar()) != EOF)
    {
        if ((a >= 'a'&& a <= 'z')||(a >= 'A' && a <= 'Z'))
        {
            al[a]++;
        }
        if (((a >= 'a'&& a <= 'z')||(a >= 'A' && a <= 'Z'))&&i == 0)
        {
            k++;
            i++;
        }
        else if (a == ' '||a == '\n'||a=='\t')
        {
            num[i] = i ;
            t[i]++;
            i = 0;
        } 
        else if (((a >= 'a'&& a <= 'z')||(a >= 'A' && a <= 'Z'))&&i > 0)  
        {
            i++ ;
        }
    }
    for ( i = 1; i < 100; i++)
    {
        if (max <num[i])
        {
            max = num[i];
        }
    }
    for (y = max ; y > 0 ; y--)
    {
        if (t[y] == 0)
        {
            continue;
        }
        printf("\n00%d\t|",y);
        int z ;
        for ( z = t[y]; z > 0; z--)
        {
            printf("*");
        } 
    } 
    int b,c,d,e ;
    for ( b = 'a'; b < 'z'+1; b++)
    {       
        if (al[b]==0)
        {
            continue;
        }
        printf("\n%c\t|",b);
        for ( d = al[b]; d > 0; d--)
        {
            printf("*");
        }  
    }
    for ( c = 'A'; c < 'Z'+1; c++)
    {
        if (al[c]==0)
        {
            continue;
        }
        printf("\n%c\t|",c);
        for ( e = al[c]; e > 0; e--)
        {
            printf("*");
        } 
    }       
    printf("\n一共有%d个单词",k);
    return 0 ;
}