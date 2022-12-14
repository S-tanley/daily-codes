//人民币金额打印
//银行在打印票据的时候，常常需要将阿拉伯数字表示的人民币金额转换为大写表示，现在请你来完成这样一个程序。
#include<stdio.h>
#include<string.h>

void My_input(char final[], char nums[], int x, int k)
{
    int bit;
    for (int i = 0; i < 20; i++)
    {
        if (final[i] == 0)
        {
            bit = i;
            break;
        }
    }
    if (k == 0)
    {
        final[bit] = 'y';
        bit++;
        if (nums[k] == '0')
        {
            /* code */
        }
        else
        {
            final[bit] = nums[k];
            bit++;
        }
    }
    else if (k == 1 || k == 5)
    {
        if (nums[k] == '0')
        {
            if (bit != 0 && final[bit-1] >= '1' && final[bit-1] <= '9')
            {
                final[bit] = nums[k];
                bit++;
            }
            else
            {
                /* code */
            }
        }
        else
        {
            final[bit] = 's';
            bit++;
            final[bit] = nums[k];
            bit++;
        }
    }
    else if (k == 2 || k == 6)
    {
        if (nums[k] == '0')
        {
            if (bit != 0 && final[bit-1] >= '1' && final[bit-1] <= '9')
            {
                final[bit] = nums[k];
                bit++;
            }
            else
            {
                /* code */
            }
        }
        else
        {
            final[bit] = 'b';
            bit++;
            final[bit] = nums[k];
            bit++;
        }
    }
    else if (k == 3 || k == 7)
    {
        if (nums[k] == '0')
        {
            if (bit != 0 && final[bit-1] >= '1' && final[bit-1] <= '9')
            {
                final[bit] = nums[k];
                bit++;
            }
            else
            {
                /* code */
            }
        }
        else
        {
            final[bit] = 'q';
            bit++;
            final[bit] = nums[k];
            bit++;
        }
    }
    else if (k == 4)
    {
        final[bit] = 'w';
        bit++;
        if (nums[k] == '0')
        {
            /* code */
        }
        else
        {
            final[bit] = nums[k];
            bit++;
        }
    }
}

void My_inverse(char nums[], int x)
{
    for (int i = 0; i < x/2; i++)
    {
        char tem;
        tem = nums[i];
        nums[i] = nums[x-i-1];
        nums[x-i-1] = tem;
    }
}

void My_print(char final[], int x)
{
    if (x == 1)
    {
        printf("零");
    }
    for (int i = 0; i < x; i++)
    {
        if (final[i] == '0')
        {
            printf("零");
        }
        else if (final[i] == '1')
        {
            printf("壹");
        }
        else if (final[i] == '2')
        {
            printf("贰");
        }
        else if (final[i] == '3')
        {
            printf("叁");
        }
        else if (final[i] == '4')
        {
            printf("肆");
        }
        else if (final[i] == '5')
        {
            printf("伍");
        }
        else if (final[i] == '6')
        {
            printf("陆");
        }
        else if (final[i] == '7')
        {
            printf("柒");
        }
        else if (final[i] == '8')
        {
            printf("捌");
        }
        else if (final[i] == '9')
        {
            printf("玖");
        }
        else if (final[i] == 'y')
        {
            printf("圆");
        }
        else if (final[i] == 's')
        {
            printf("拾");
        }
        else if (final[i] == 'b')
        {
            printf("佰");
        }
        else if (final[i] == 'q')
        {
            printf("仟");
        }
        else if (final[i] == 'w')
        {
            printf("万");
        }
    }
}

void My_eliminate(char nums[], int x)
{
    for (int i = 0; i < x-1; i++)
    {
        nums[i] = nums[i+1];
    }
}

int main()
{
    int times;
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        char nums[9] = {0};
        char final[20] = {0};
        scanf("%s",nums);
        int nums_long = strlen(nums);
        if (nums[0] == '-')
        {
            printf("负");
            My_eliminate(nums,nums_long);
            nums_long--;
        }
        My_inverse(nums,nums_long);
        for (int k = 0; k < nums_long; k++)
        {
            My_input(final,nums,nums_long,k);
        }
        int final_long = strlen(final);
        My_inverse(final, final_long);
        My_print(final, final_long);
        printf("\n");
    }
    return 0;
}