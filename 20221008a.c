#include <stdio.h> 
int main() 
{
    int n;
    float A = 0;   
    scanf("%d", &n);  // 有n组数据
    for (int i = 0; i < n; i++) 
    {
        int m100=0,m50=0,m10=0,m5=0,m2=0,m1=0,m_10=0,m_5=0,m_1=0;
        scanf("%f",  &A);  // 读入一个整数
     //计算
        int total = A * 100 ;
        m100 = total/10000 ;
        total = total%10000 ;
        m50 = total/5000 ;
        total = total%5000 ;
        m10 = total/1000 ;
        total = total%1000 ;
        m5 = total/500 ;
        total = total%500 ;
        m2 = total/200 ;
        total = total%200 ;
        m1 = total/100 ;
        total = total%100 ;
        m_10 = total/10 ;
        total = total%10 ;
        m_5 = total/5 ;
        total = total%5 ;
        m_1 = total/1 ;
        printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n", m100,m50,m10,m5,m2,m1,m_10,m_5,m_1);  // 输出计算结果
    }
    return 0;
}