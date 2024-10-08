/*结构指针*/
/*和数组不同，结构变量的名字并不是结构变量的地址，必须使用&运算符
struct date *pDate=&today;*/
#include<stdio.h>
struct date{
    int month;
    int day;
    int year;
};
int main()
{
    struct date today={07,31,2014};
    struct date thismonth={.month=7,.year=2014};
    struct date *pDate=&today;
    printf("Today's date is %i-%i-%i\n",pDate->month,pDate->day,pDate->year);
    printf("Today's date is %i-%i-%i\n",today.month,today.day,today.year);
    printf("This month is %i-%i-%i",thismonth.month,thismonth.day,thismonth.year);
    return 0;
}