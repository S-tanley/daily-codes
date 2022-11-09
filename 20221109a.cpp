//统计一段文本中每个单词的出现次数，单词区分大小写。文本中没有标点符号。
#include<stdio.h>
#include<string.h>
void Mysort(char words[30000][51], int j, int i)
{
    for (int k =0; k < i-j-1; k++)
    {
        if (strcmp(words[k],words[k+1]) <= 0)
        {
            /* code */
        }
        else
        {
            char tem[51] = {0};
            strcpy(tem,words[k]);
            strcpy(words[k],words[k+1]);
            strcpy(words[k+1],tem);
        }
    }
}

void Myprint(char words[][51], int i)
{
    for (int j = 0, count = 1; j < i; j++)
    {
        if (strcmp(words[j],words[j+1]) == 0)
        {
            count++;
        }
        else
        {
            printf("%s %d\n",words[j],count);
            count = 1;
        }
    }
}

int main()
{
    char words[30000][51] = {0};
    int i = 0;
    int x;
    while ((x = scanf("%s",words[i]) )== 1)
    {
        i++;
        if (getchar()=='\n')
        {
            break; 
        }
    }
    for (int j = 0; j < i-1; j++)
    {
        Mysort(words,j,i);
    }
    Myprint(words,i);
    return 0;
}