//C语言中有一个函数strstr。我们编写一个类似功能的函数，mystrstr，
//作用是查找字符串a中出现的第一个b串的下标，如果没有找到，返回-1。
#include<stdio.h>
#include<string.h>
int mystrstr(char A[501], char B[501])
{
    int a = strlen(A)-1;
    int b = strlen(B)-1;
    for (int i = 0; i <= a-b; i++)
    {
        if (A[i] == B[0])
        {
            int j = 0;
            for ( j = 0; j < b; j++)
            {
                if (A[i+j] == B[j])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            if (j==b)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    char A[501] = {0};
    char B[501] = {0};
    fgets(A,500,stdin);
    fgets(B,500,stdin);
    printf("%d\n",mystrstr(A,B));
    return 0;
}