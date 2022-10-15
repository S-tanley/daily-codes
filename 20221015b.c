//各种类型的长度
#include<stdio.h>
int main()
{
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(long));
    printf("%lu\n",sizeof(long long));
    printf("%lu\n",sizeof(short));
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(double));
    printf("%lu\n",sizeof(int*));
    printf("%lu\n",sizeof(char*));
    printf("%lu\n",sizeof(long*));
    printf("%lu\n",sizeof(long long*));
    printf("%lu\n",sizeof(short*));
    printf("%lu\n",sizeof(float*));
    printf("%lu\n",sizeof(double*));
    printf("%lu\n",sizeof(unsigned int));
    printf("%lu\n",sizeof(unsigned long));
    printf("%lu\n",sizeof(unsigned long long));
    printf("%lu\n",sizeof(unsigned short));
    return 0 ;
}