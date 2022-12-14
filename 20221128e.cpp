//C语言中的字符都是以ASCII码进行编码的。
//现在给你一串用16进制表示的整数序列，请输出其表示的字符串。
#include<stdio.h>
#include<string.h>
int main()
{
    int times;
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        char data[1000] = {0};
        scanf("%s",data);
        int Ascii = 0;
        for (int j = 1; j <= strlen(data)/2; j++)
        {
            if (data[j*2-1] >= '0' && data[j*2-1] <= '9')
            {
                Ascii += data[j*2-1] - '0';
            }
            else
            {
                Ascii += data[j*2-1] - 55;
            }
            if (data[j*2-2] >= '0' && data[j*2-2] <= '9')
            {
                Ascii += (data[j*2-2] - '0')*16;
            }
            else
            {
                Ascii += (data[j*2-2] - 55)*16;
            }
            printf("%c",Ascii);
            Ascii = 0;
        }
        printf("\n");
    }
    return 0;
}