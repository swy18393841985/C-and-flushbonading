/*结构作为函数参数*/
/*int numberofDays(struct date d)
整个结构可以作为参数值传入函数
这时候是在函数内部新建一个结构变量，并复制调用者的结构的值
也可以返回一个结构*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct date{
    int month;
    int day;
    int year;
};
bool isLeap(struct date d);
int numberOfDays(struct date d);
int main()
{
    struct date today,tomorrow;
    printf("Enter today's date(mm,dd,yy):");
    scanf("%i %i %i",&today.month,&today.day,&today.year);
    if (today.day!=numberOfDays(today)){
        tomorrow.day=today.day+1;
        tomorrow.month=today.month;
        tomorrow.year=today.year;
    }else if(today.month==12){
        tomorrow.day=1;
        tomorrow.month=1;
        tomorrow.year=today.year+1;
    }else{
        tomorrow.day=1;
        tomorrow.month=today.month+1;
        tomorrow.year=today.year;
    }
    printf("Tomorrow's date is %i-%i-%i\n",tomorrow.year,tomorrow.month,tomorrow.day);
    return 0;
}
bool isLeap(struct date d){
    bool leap=false;
    if ((d.year%4==0&&d.year%100!=0)||d.year%400==0){
        leap=true;
    }
    return leap;
}
int numberOfDays(struct date d){
    int days;
    const int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (d.month==2&&isLeap(d)){
        days=29;
    }else{
        days=days_per_month[d.month-1];
    }
    return days;
}