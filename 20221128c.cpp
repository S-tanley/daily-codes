//统计一段文本中出现次数最多的英文单词。单词不区分大小写。
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int Mycmp(const void* e1, const void* e2)
{
    return strcmp((char*)e1, (char*)e2);
}

void Myprint(char words[][51], int i)
{
    int showtime[30000] = {1};
    int a = 0;
    int biggest = 0;
    for (int j = 0, count = 1; j < i-1; j++)
    {
        if (strcmp(words[j],words[j+1]) == 0)
        {
            showtime[a]++;
        }
        else
        {
            a = j+1;
            showtime[a]++;
            count = 1;
        }
    }
    for (int j = 0; j < i; j++)
    {
        if (showtime[biggest] <= showtime[j+1])
        {
            biggest = j+1;
        }
    }
    printf("%s %d",words[biggest],showtime[biggest]);
}

int main()
{
    char words[30000][51] = {0};
    int i = 0, m1 = 0, m2 = 0, m3 = 0, j1 = 0, k1 = 0;
    int x;
    while ((x = getchar()) != EOF)
    {
        if (x >= 'A' && x <= 'Z')
        {
            words[j1][k1] = x + 32;
            k1++;
            if (m1 != 1)
            {
                m1 = 1;
            }
        }
        else if (x >= 'a' && x <= 'z')
        {
            words[j1][k1] = x;
            k1++;
            if (m1 != 1)
            {
                m1 = 1;
            }
        }
        else
        {
            if (m1 == 1)
            {
                m1 = 0;
                j1++;
                k1 = 0;
            }
        }
    }
    for (int j = 0; j < j1-1; j++)
    {
        qsort(words,j1,sizeof(words[0]),Mycmp);
    }
    Myprint(words,j1);
    return 0;
}