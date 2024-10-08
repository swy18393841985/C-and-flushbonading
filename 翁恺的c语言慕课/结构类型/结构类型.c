/*申明结构类型*/
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
    printf("Today's date is %i-%i-%i\n",today.month,today.day,today.year);
    printf("This month is %i-%i-%i",thismonth.month,thismonth.day,thismonth.year);
    return 0;
}
/*声明结构的形式*/
/*struct point{
    code;
};

struct{
    code;
}p1,p2;

struct point{
    code;
}p1,p2;*/

/*结构运算*/
/*要访问整个结构，直接用结构变量的名字
对于整个结构，可以赋值、取地址、传递给函数参数
p1=(struct point){5,10}==>p1.x=5,p1.y=10;
p1=p2;*/