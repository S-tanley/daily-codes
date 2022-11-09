//在基于Internet的程序中，我们常常需要判断一个IP字符串的合法性。合法的IPv4地址是这样的形式：
//A.B.C.D
//其中A、B、C、D均为位于[0, 255]中的整数。为了简单起见，我们规定这四个整数中不会有前导零存在，如001这种情况。现在，请你来完成这个判断程序吧。
#include<stdio.h>
#include<string.h>
int main()
{
    while (1)
    {
        char IP[32] = {0};
        char check[] = "End of file";
        fgets(IP,32,stdin);
        if (IP[11] == '\n')
        {
            for (int i = 0; i < 11; i++)
            {
                if (IP[i] != check[i])
                {
                    break;
                }
                else if (i == 10)
                {
                    return 0 ;
                }
            }
        }
        bool check1 = 1;
        int mylong;
        for (int i = 30; i >= 0 ; i--)
        {
            if (IP[i] == ' ' || IP[i] == '\t' || IP[i] == '\n'||IP[i] == '\0')
            {
                /* code */
            }
            else
            {
                mylong = i;
                break;
            }   
        }
        int j, time, x, t = 0;
        for (j = mylong; j >= 0; j--)
        {
            time = 1;
            x = 0;
            if (IP[j]>'9' || IP[j]<'0')
            {
                break;
            }
            while (IP[j] != '.' && j>=0)
            {
                if (IP[j]>'9' || IP[j]<'0')
                {
                    goto end;
                }
                x += (IP[j]-'0')*time;
                time *= 10;
                j--; 
            }
            if (j >= 0 && IP[j] == '.')
            {
                t++;
            }
            if (x/(time/10) == 0 )
            {
                if ((time == 10 && x == 0 ))
                {
                    /* code */
                }
                else
                {
                    check1 = 0;
                    break;
                }
            }
            else if (x>255 || x<0)
            {
                check1 = 0;
                break;
            }
        }
        if (j < 0 && check1 == 1 && t == 3 && IP[0] != '.')
        {
            printf("YES\n");
        }
        else
        {
            end:
            printf("NO\n");
        }
    }
    return 0;
}