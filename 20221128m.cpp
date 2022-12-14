//计算两个大整数的积。
#include<stdio.h>
#include<string.h>

void Myinverse(char X[])
{
    for (int i = 0; i < strlen(X)/2; i++)
    {
        char tem;
        tem = X[i];
        X[i] = X[strlen(X)-1-i];
        X[strlen(X)-1-i] = tem;
    }
}

 void E_multiple(char L[], char S[], char final[], int j)
{
    for (int i = 0; i < strlen(L); i++)
    {
        final[j+i] += (S[j] - '0') * (L[i] - '0');
    }
}

void My_carry(char final[])
{
    int k = 1000;
    while (final[k] == '\0')
    {
        k--;
    }
    int times = k;
    for (int i = 0; i <= times; i++)
    {
        if (final[i] >= 10)
        {
            final[i+1] += final[i]/10;
            final[i] = final[i]%10;
        }
    }
}

void My_print(char final[])
{
    int first;
    int i = 1000;
    while (final[i] == '\0')
    {
        i--;
    }
    first = i;
    if (first == -1)
    {
        printf("0\n");
    }
    else
    {
        for (int j = first; j >= 0; j--)
        {
            printf("%c",final[j]+'0');
        }
        printf("\n");
    }
}

int main()
{
    int times;
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        char A[501] = {0};
        char B[501] = {0};
        char final[1001] = {0};
        scanf("%s",A);
        scanf("%s",B);
        Myinverse(A);
        Myinverse(B);
        if (strlen(A)>=strlen(B))
        {
            for (int j = 0; j < strlen(B); j++)
            {
                E_multiple(A,B,final,j);
                My_carry(final);
            }
        }
        else
        {
            for (int j = 0; j < strlen(A); j++)
            {
                E_multiple(B,A,final,j);
                My_carry(final);
            }
        }
        My_print(final);
    }
    return 0;
}