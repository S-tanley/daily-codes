//一个数组内的数相乘，如果正返回1，如果负返回-1，如果0返回0
#include<stdio.h>

int arraySign(int* nums, int numsSize)
{
    int a = 1 ;
    for (int i = 0; i < numsSize; i++)
    {
        a = nums[i] * a;
    }
    if (a > 0)
    {
        return 1;
    }
    else if (a == 0)
    {
        return 0 ;
    }
    return -1 ;
}

int main()
{
    int numsSize = 0, time;
    scanf("%d",&time);
    for (int i = 0; i < time; i++)
    {
        int nums[1000] = {0};
        int j = 0 ;
        while (scanf("%d",&nums[j]) == 1)
        {
            numsSize++;
            j++ ;
        }
        printf("%d",arraySign(nums,numsSize)) ;
    } 
    return 0;
}