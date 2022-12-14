//请编写程序，将整数分解为若干个质数的乘积。
#include<stdio.h>
#include<math.h>
int main()
{
    int times, z = 0;
    scanf("%d",&times);
    int data_list[5000] = {0};
    for (int i = 2; i <= 10000; i++)
    {
        int j, check = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i%j == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
        {
            //
        }
        else
        {
            data_list[z] = i;
            z++;
        }
    }
    for (int i = 0; i < times; i++)
    {
        int test_num;
        scanf("%d",&test_num);
        for (int j = 0; test_num > data_list[j]; )
        {
            if (test_num%data_list[j] == 0)
            {
                printf("%d*",data_list[j]);
                test_num /= data_list[j];
            }
            else
            {
                j++;
            }
        }
        printf("%d\n",test_num);
    }
    return 0;
}