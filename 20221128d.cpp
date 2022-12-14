//输入一行语句，把里面每个单词都逆序输出，其他符号保持不变。
#include<stdio.h>
#include<string.h>
int main()
{
    char text[1000] = {0};
    fgets(text,1000,stdin);
    int first = -1, second = -1, flag = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (first == -1 && second == -1)
        {
            if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            {
                first = i;
            }
            else
            {
                printf("%c",text[i]);
            }
        }
        else if (first != -1)
        {
            if (text[i] >= 'a' && text[i] <= 'z' && text[i] >= 'A' && text[i] <= 'z')
            {
                second = i;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            if (second == -1)
            {
                printf("%c",text[first]);
                printf("%c",text[first+1]);
                first = -1;
                second = -1;
                flag = 0;
                continue;
            }
            for (int j = second; j >= first; j--)
            {
                printf("%c",text[j]);
            }
            printf("%c",text[second+1]);
            first = -1;
            second = -1;
            flag = 0;
        }
    }
    return 0;
}