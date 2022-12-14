//广义表I
//你的任务是写程序求出给定广义表的长度和深度。
#include<stdio.h>
#include<string.h>
int main()
{
    while (1)
    {
        char text[500] = {0};
        fgets(text,500,stdin);
        if (strcmp(text,"END\n") == 0)
        {
            break;
        }
        int text_l = strlen(text);
        int width = 0, final_l = 0, final_w = 0;
        for (int i = 0; i < text_l; i++)
        {
            if (text[i] == '(')
            {
                width++;
            }
            else if (text[i] == ')')
            {
                width--;
            }
            if (width > final_w)
            {
                final_w = width;
            }
            if (width == 1 && text[i] == ',')
            {
                final_l++;
            }
        }
        if (final_l == 0)
        {
            int i;
            for (i = 0; i < text_l; i++)
            {
                if (text[i] == ')')
                {
                    width--;
                }
                if (width == 1)
                {
                    if (text[i] != ' ')
                    {
                        break;
                    }
                }
                if (text[i] == '(')
                {
                    width++;
                }
            }
            if (i == text_l)
            {
                printf("%d %d\n",final_l,final_w);
                continue;
            }
        }
        printf("%d %d\n",final_l+1,final_w);
    }
    return 0;
}