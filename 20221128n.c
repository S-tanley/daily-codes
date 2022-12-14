//计算两个大整数的商。
#include<stdio.h>
#include<string.h>

void My_change(char X[])
{
    int i = 0;
    while (X[i] != 0)
    {
        X[i] -= '0';
        i++;
    }
}

int main()
{
    int times;
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        char A[1001] = {0};
        char B[501] = {0};
        char tem[1001] = {0};
        char zero[1001] = {0};
        char final[1001] = {0};
        int consult[1001] = {0};
        int n = 0, bit = 0, flag = 0, j = 0;
        scanf("%s %s",A,B);
        strcpy(tem,A);
        int a = strlen(A);
        int b = strlen(B);
        My_change(A);
        My_change(B);
        My_change(tem);
        if (strcmp(A,zero) == 0)
        {
            printf("0\n");
            continue;
        }
        for (j = 0; j <= a-b; j++)
        {
            int k = b;
            while (k == b)
            {
                for ( k = 0; k < b; k++)
                {
                    again :
                    if (tem[k+j] - B[k] >= 0)
                    {
                        tem[k+j] = tem[k+j] - B[k];
                    }
                    else if (k+j-1>=0)
                    {
                        int start = -1;
                        for (int now = k+j-1; now >= 0; now--)
                        {
                            if (tem[now] > 0 && start == -1)
                            {
                                start = now;
                            }
                        }
                        if (start == -1)
                        {
                            for (int q = 0; q < a; q++)
                            {
                                tem[q] = A[q];
                            }
                            break;
                        }
                        for ( ; start < k+j; start++)
                        {
                            tem[start]--;
                            tem[start+1] += 10;
                        }
                        goto again;
                    }
                    else
                    {
                        for (int q = 0; q < a; q++)
                        {
                            tem[q] = A[q];
                        }
                        break;
                    }
                }
                if (k == b)
                {
                    flag = 1;
                    for (int q = 0; q < a; q++)
                    {
                        A[q] = tem[q];
                    }
                }
                if (k == b)
                {
                    final[j]++;
                    
                }
            }
            for (int i1 = 0; i1 < a; i1++)
            {
                if (flag == 0)
                {
                    break;
                }
                if (A[i1] != 0)
                {
                    flag = 0;
                    break;
                }
                if (i1 == a - 1)
                {
                    int left = 0, right = 1000;
                    for (int j1 = 0; j1 <= 1000; j1++)
                    {
                        if (final[j1] != 0)
                        {
                            left = j1;
                            break;
                        }
                    }
                    for (int j2 = 1000; j2 >= 0; j2--)
                    {
                        if (final[j2] != 0)
                        {
                            right = j2;
                            break;
                        }
                    }
                    for (int jj = left; jj <= right; jj++)
                    {
                        printf("%d",final[jj]);
                    }
                    for (int jj = j+b; jj < a; jj++)
                    {
                        printf("0");
                    }
                    printf("\n");
                    goto end;
                }
            }
        }
        if (j == a-b+1)
        {
                int left = 0, right = 1000;
                for (int j1 = 0; j1 <= 1000; j1++)
                {
                    if (final[j1] != 0)
                    {
                        left = j1;
                        break;
                    }
                }
                for (int j2 = 1000; j2 >= 0; j2--)
                {
                    if (final[j2] != 0)
                    {
                        right = j2;
                        break;
                    }
                }
                for (int j = left; j <= right; j++)
                {
                    printf("%d",final[j]);
                }
                printf("\n");
        }
        end: ;
    }
    return 0;
}