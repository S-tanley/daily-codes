//众所周知，日期有两种表示方法:MM/DD/YY或者YY/MM/DD.我们假设本题讨论的年份的格式都是20YY。
//给你一个字符串，如果它只能代表一个合法的日期，满足MM/DD/YY的格式或者是YY/MM/DD的格式，那么输出 “month date,year”的格式（见第二个样例），否则输出在这两种表示法下的日期差（见第一个样例）。
#include<stdio.h>
int main()
{
    char A1,A2,B1,B2,C1,C2 ;
    scanf("%c%c/%c%c/%c%c",&A1,&A2,&B1,&B2,&C1,&C2);
    int a ,b,c ;
    a = (A1 - '0')*10 + A2 - '0' ;
    b = (B1 - '0')*10 + B2 - '0' ;
    c = (C1 - '0')*10 + C2 - '0' ;
    int first = 0, second = 0 ;
    if (a > 0 && a < 13)
    {
       if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
        {
            if (b > 0 && b <32)
            {
                first++ ;
            }
        }
        else if (a == 2)
        {
            if (c == 0 || c%4 == 0)//闰年
            {
                if (b > 0 && b < 30)
                {
                    first++;
                }
            }
            else
            {
                if (b > 0 && b < 29)
                {
                    first++;
                }
            }
        }
        else
        {
            if (b > 0 && b < 31)
            {
                first++;
            }
        }
    }
    if (b > 0 && b < 13)
    {
       if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
        {
            if (c > 0 && c <32)
            {
                second++ ;
            }
        }
        else if (b == 2)
        {
            if (a == 0 || a%4 == 0)//闰年
            {
                if (c > 0 && c < 30)
                {
                    second++;
                }
            }
            else
            {
                if (c > 0 && c < 29)
                {
                    second++;
                }
            }
        }
        else
        {
            if (c > 0 && c < 31)
            {
                second++;
            }
        }
    }
    if (first==1 && second==1)
    {
        int d1 = b, d2 = c, m1 = a,m2 = b, y1 = c,y2 = a ;
        if (y2 > y1)
        {
            int t ;
            t = y1 ;
            y1 = y2 ;
            y2 = t ;
            t = m1 ;
            m1 = m2 ;
            m2 = t ;
            t = d1 ;
            d1 =d2 ;
            d2 = t ;
        }
        int sub_day = 0 ;
        if (y1 > y2)
        {
            if (y1 + 1 >= y2 - 1)
            {
                for (int i = y2 + 1; i <= y1 - 1; i++)
                {
                    if (i == 0 || i%4 == 0)
                    {
                        sub_day += 366 ;
                    }
                    else
                    {
                        sub_day += 365 ;
                    }
                }
            }
            if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12)
            {
                int x ;
                x = 31 - d2 ;
                sub_day += x ;
            }
            else if (m2 == 2)
            {
                if (y2 == 0 || y2%4 == 0)//闰年
                {
                    int x ;
                    x = 29 - d2 ;
                    sub_day += x ; 
                }
                else
                {
                    int x ;
                    x = 28 - d2 ;
                    sub_day += x ;
                }
            }
            else
            {
                int x ;
                x = 30 - d2 ;
                sub_day += x ;
            }
            sub_day += d1 ;
            while (m2+1 < 13)
            {
                if (m2+1 == 1 || m2+1 == 3 || m2+1 == 5 || m2+1 == 7 || m2+1 == 8 || m2+1 == 10 || m2+1 == 12)
                {
                    sub_day += 31 ;
                }
                else if (m2+1 == 2)
                {
                    if (y2 == 0 || y2%4 == 0)//闰年
                    {
                        sub_day += 29 ;
                    }
                    else
                    {
                        sub_day += 28 ;
                    }
                }
                else
                {
                    sub_day += 30 ;
                }
                m2++ ;
            }
            while (m1-1 > 0)
            {
                if (m1-1 == 1 || m1-1 == 3 || m1-1 == 5 || m1-1 == 7 || m1-1 == 8 || m1-1 == 10 || m1-1 == 12)
                {
                    sub_day += 31 ;
                }
                else if (m1-1 == 2)
                {
                    if (y1 == 0 || y1%4 == 0)//闰年
                    {
                        sub_day += 29 ;
                    }
                    else
                    {
                        sub_day += 28 ;
                    }
                }
                else
                {
                    sub_day += 30 ;
                }
                m1-- ;
            } 
        }
        if (y1 == y2)
        {
            if (m2 > m1)
            {
                int t ;
                t = m1 ;
                m1 = m2 ;
                m2 = t ;
                t = d1 ;
                d1 =d2 ;
                d2 = t ;
                if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12)
                {
                    int x ;
                    x = 31 - d2 ;
                    sub_day += x ;
                }
                else if (m2 == 2)
                {
                    if (y2 == 0 || y2%4 == 0)//闰年
                    {
                        int x ;
                        x = 29 - d2 ;
                        sub_day += x ; 
                    }
                    else
                    {
                        int x ;
                        x = 28 - d2 ;
                        sub_day += x ;
                    }
                }
                else
                {
                    int x ;
                    x = 30 - d2 ;
                    sub_day += x ;
                }
                sub_day += d1 ;
                while (m1-1 > m2+1)
                {
                    if (m2+1 == 1 || m2+1 == 3 || m2+1 == 5 || m2+1 == 7 || m2+1 == 8 || m2+1 == 10 || m2+1 == 12)
                    {
                        int x ;
                        x = 31 - d2 ;
                        sub_day += x ;
                    }
                    else if (m2+1 == 2)
                    {
                        if (y2 == 0 || y2%4 == 0)//闰年
                        {
                            int x ;
                            x = 29 - d2 ;
                            sub_day += x ; 
                        }
                        else
                        {
                            int x ;
                            x = 28 - d2 ;
                            sub_day += x ;
                        }
                    }
                    else
                    {
                        int x ;
                        x = 30 - d2 ;
                        sub_day += x ;
                    }
                }
            }
        }
        if (sub_day == 0)
        {
            goto begin;
        }
        printf("%d",sub_day);
    }
    else
    {
        begin: ;
        int day,month ;
        char year1,year2 ;
        if (first == 1)
        {
            day = b ;
            month = a ;
            year1 = C1 ;
            year2 = C2 ;
        }
        else
        {
            day = c ;
            month = b ;
            year1 = A1 ;
            year2 = A2 ;
        }
        switch (month)
        {
        case 1:
            printf("January %d, 20%c%c", day,year1,year2) ;
            break;
        case 2:
            printf("February %d, 20%c%c",day,year1,year2) ;
            break;
        case 3:
            printf("March %d, 20%c%c",day,year1,year2) ;
            break;
        case 4:
            printf("April %d, 20%c%c",day,year1,year2) ;
            break;
        case 5:
            printf("May %d, 20%c%c",day,year1,year2) ;
            break;
        case 6:
            printf("June %d, 20%c%c",day,year1,year2) ;
            break;
        case 7:
            printf("July %d, 20%c%c",day,year1,year2) ;
            break;
        case 8:
            printf("August %d, 20%c%c",day,year1,year2) ;
            break;
        case 9:
            printf("September %d, 20%c%c",day,year1,year2) ;
            break;
        case 10:
            printf("October %d, 20%c%c",day,year1,year2) ;
            break;
        case 11:
            printf("November %d, 20%c%c",day,year1,year2) ;
            break;
        case 12:
            printf("December %d, 20%c%c",day,year1,year2) ;
            break;
        default:
            printf("fault") ;
            break;
        }
    }
    return 0 ;
}