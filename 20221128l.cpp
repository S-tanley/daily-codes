//电子表格
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int list[51][51] = {0};
    int insert_r[51] = {0};
    int insert_c[51] = {0};
    bool del_r[51] = {0};
    bool del_c[51] = {0};
    short row, col, n_d_r = 0, n_d_c = 0, n_i_r = 0, n_i_c = 0;
    scanf("%hd %hd",&row,&col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            scanf("%d",&list[i][j]);
            del_c[j] = 1;
        }
        del_r[i] = 1;
    }
    int times_op;
    scanf("%d",&times_op);
    for (int i = 0; i < times_op; i++)
    {
        char option[3] = {0};
        char op_check;
        scanf("%s",option);
        if (strcmp(option,"SR") == 0)
        {
            int x1, x2, tem;
            scanf("%d %d",&x1,&x2);
            for (int j = 1; j <= col; j++)
            {
                tem = list[x1][j];
                list[x1][j] = list[x2][j];
                list[x2][j] = tem;
            }
        }
        else if (strcmp(option,"SC") == 0)
        {
            int y1, y2, tem;
            scanf("%d %d",&y1,&y2);
            for (int j = 1; j <= row; j++)
            {
                tem = list[j][y1];
                list[j][y1] = list[j][y2];
                list[j][y2] = tem;
            }
        }
        else if (strcmp(option,"DR") == 0)
        {
            int x;
            scanf("%d",&x);
            del_r[x] = 0;
            n_d_r++;
        }
        else if (strcmp(option,"DC") == 0)
        {
            int y;
            scanf("%d",&y);
            del_c[y] = 0;
            n_d_c++;
        }
        else if (strcmp(option,"IR") == 0)
        {
            int x;
            scanf("%d",&x);
            insert_r[x-1]++;
            n_i_r++;
        }
        else if (strcmp(option,"IC") == 0)
        {
            int y;
            scanf("%d",&y);
            insert_c[y-1]++;
            n_i_c++;
        }
    }
    for (int i = 1; i <= row; i++)
    {
        if (insert_r[i-1] != 0)
        {
            for (int k = 0; k < insert_r[i-1]; k++)
            {
                for (int k1 = 0; k1 < col-n_d_c+n_i_c; k1++)
                {
                    printf("0 ");
                }
                printf("\n");
            }
        }
        if (del_r[i] == 0)
        {
            continue;
        }
        for (int j = 1; j <= col; j++)
        {
            if (insert_c[j-1] != 0)
            {
                for (int k = 0; k < insert_c[j-1]; k++)
                {
                    printf("0 ");
                }
            }
            if (del_c[j] == 0)
            {
                continue;;
            }
            else
            {
                printf("%d ",list[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}