//用点阵的形式在字符界面上显示数字。
#include<stdio.h>
#include<string.h>
int main()
{
    int times; 
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        char nums[6] = {0};
        scanf("%s",nums);
        printf("%s:\n",nums);
        for (int k = 1; k <= 7; k++)
        {
            for (int j = 0; j < strlen(nums); j++)
            {
                if (nums[j] == '0')
                {
                    if (k == 1 || k == 7)
                    {
                        printf("*****  ");
                    }
                    else 
                    {
                        printf("*   *  ");
                    }
                }
                else if (nums[j] == '1')
                {
                    printf("    *  ");
                }
                else if (nums[j] == '2')
                {
                    if (k == 1 || k == 4 || k == 7)
                    {
                        printf("*****  ");
                    }
                    else if (k == 2 || k == 3)
                    {
                        printf("    *  ");
                    }
                    else
                    {
                        printf("*      ");
                    }  
                }
                else if (nums[j] == '3')
                {
                    if (k == 1 || k == 4 || k == 7)
                    {
                        printf("*****  ");
                    }
                    else
                    {
                        printf("    *  ");
                    }
                }
                else if (nums[j] == '4')
                {
                    if (k == 1 || k == 2 || k == 3)
                    {
                        printf("*   *  ");
                    }
                    else if (k == 4)
                    {
                        printf("*****  ");
                    }
                    else
                    {
                        printf("    *  ");
                    }
                }
                else if (nums[j] == '5')
                {
                    if (k == 1 || k == 4 || k == 7)
                    {
                        printf("*****  ");
                    }
                    else if (k == 2 || k == 3)
                    {
                        printf("*      ");
                    }
                    else
                    {
                        printf("    *  ");
                    }  
                }
                else if (nums[j] == '6')
                {
                    if (k == 1 || k == 4 || k == 7)
                    {
                        printf("*****  ");
                    }
                    else if (k == 2 || k == 3)
                    {
                        printf("*      ");
                    }
                    else
                    {
                        printf("*   *  ");
                    }
                }
                else if (nums[j] == '7')
                {
                    if (k == 1)
                    {
                        printf("*****  ");
                    }
                    else
                    {
                        printf("    *  ");
                    }
                }
                else if (nums[j] == '8')
                {
                    if (k == 1 || k == 4 || k == 7)
                    {
                        printf("*****  ");
                    }
                    else
                    {
                        printf("*   *  ");
                    }
                }
                else if (nums[j] == '9')
                {
                    if (k == 1 || k == 4 || k == 7)
                    {
                        printf("*****  ");
                    }
                    else if (k == 2 || k == 3)
                    {
                        printf("*   *  ");
                    }
                    else
                    {
                        printf("    *  ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}