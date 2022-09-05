#include<stdio.h>
int Max(a,b)
{
    if (a>b)
        return a ;
    else
        return b ;
   
}
int main()
{
    printf("请输入两个值，进行比较大小 :");
    int num1,num2 ;
    scanf ("%d%d",&num1,&num2);
    printf("较大值为 : %d",Max(num1,num2));
    return 0 ;
      
}