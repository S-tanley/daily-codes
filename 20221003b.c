//检测三角形
#include<stdio.h>

int largestPerimeter(int* nums)
{
    if (nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[2]+nums[0]>nums[1])
    {
        return nums[0]+nums[1]+nums[2];
    }
    return 0 ;
}

int main()
{
    int time;
    scanf("%d",&time);
    for (int i = 0; i < time; i++)
    {
        int nums[3];
        scanf("%d%d%d",&nums[0],&nums[1],&nums[2]);
        printf("%d",largestPerimeter(nums));
    }   
    return 0;
}