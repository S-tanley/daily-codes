#include<stdio.h>
int main()
{
    char password[20] = {0};
    printf("请输入密码: ");
    scanf("%s",password);
    int b = getchar();
    int c ;
    while ((c = getchar()) != '\n')
    {
        ;
    }
    printf("请确认:");
    int a = getchar();
    if (a == 'y')
    {
        printf("成功");
    }
    else
    {
        printf("失败");
    }
    return 0 ;
}