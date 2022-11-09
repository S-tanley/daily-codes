//输入两个字符串s和t，判断是否可以从s中删除0个或多个字符(其他字符顺序不变)得到字符串t。
#include<stdio.h>
#include<string.h>
int main()
{
    char A[501] = {0};
    char B[501] = {0};
    scanf("%s %s",A,B);
    int a = strlen(A);
    int b = strlen(B);
    int j = 0;
    for (int i = 0; i < a; i++)
    {
        if (A[i] == B[j])
        {
            j++;
        }
    }
    if (j == b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}