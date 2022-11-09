//假设一元一次方程中只包含整数、小写字母及+、-、=这三个数学符号(当然，符号“-”既可作减号，也可作负号)。
//方程中并没有括号，没有除号，也没有空白字符。方程中的字母表示未知数。
//请编写程序求解一元一次方程。
#include<stdio.h>
#include<string.h>
void Clear(char A[])
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        A[i] = '\0';
    }
}

int Transfer(char A[])
{
    int num_long = strlen(A);
    int time = 1;
    int F = 0;
    for (int i = num_long-1; i >= 0; i--)
    {
        F += (A[i]-'0')*time;
        time *= 10;
    }
    return F;
}

int main()
{
    int time;
    scanf("%d",&time);
    for (int i = 0; i < time; i++)
    {
        char All[2001] = {0};
        char check[3] = {0};
        short LF = 1, mysign = 1, num = 0;
        int multiply = 0;
        double final = 0;
        char number[1000] = {0};
        scanf("%s",All);
        int mylong = strlen(All);
        int con = 0;
        for (int k = 0; k < mylong; k++)
        {
            if (All[k] == '+')
            {       
                final += Transfer(number)*LF*mysign;
                if (con == 1)
                {
                    
                }
                else
                {
                    mysign = 1;
                }
                num = 0;
                con = 1;
                Clear(number);
                continue;
            }
            else if (All[k] == '-')
            {
                final += Transfer(number)*LF*mysign;
                if (con == 1)
                {
                    mysign = (mysign == 1? -1: 1);
                }
                else
                {
                    mysign = -1;
                }
                num = 0;
                con = 1;
                Clear(number);
                continue;
            }
            else if (All[k] == '=')
            {
                final += Transfer(number)*LF*mysign;
                LF = -1;
                num = 0;
                mysign = 1;
                con = 0;
                Clear(number);
                continue;
            }
            else if (All[k] <= 'z' && All[k] >= 'a')
            {
                multiply += (Transfer(number)==0?1:Transfer(number))*LF*mysign;
                check[0] = All[k];
                num = 0;
                con = 0;
                Clear(number);
            }
            else if (All[k] <= '9' && All[k] >= '0')
            {
                number[num] = All[k];
                num++;
                con = 0;
            }
        } 
        final += Transfer(number)*LF*mysign;
        printf("%c=%lf\n",check[0],-(final/(double)multiply));
    }
    return 0;
}