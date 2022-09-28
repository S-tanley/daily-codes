#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // 有n组数据
    for (i = 0; i < n; i++) {
        int a ;
        scanf("%d",&a);
        int b = a ;
        for (int j = 0; j < a ; j++)
        {
            if (j)
            {
                for (int t = 0; t < j; t++)
                {
                    printf(" ");
                }
                
            }
            for (int t = 0; t < 2*b-1; t++)
            {
                printf("*"); 
            }
            b-- ;
            printf("\n");     
        }  
    }
    return 0;
}