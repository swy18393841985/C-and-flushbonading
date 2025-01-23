/*浮点数*/

/*两个整数的运算结果只能是整数
10和10.0在c中是两个完全不同的数
10.0是浮点数*/

//浮点数与整数：浮点数转换成整数时，会截去小数部分。
#include<stdio.h>

int main()
{
    printf("请输入身高的英尺和英寸，""如输入\"5 7\"表示5尺7英寸：");
    int foot;
    int inch;
    scanf("%d %d",&foot,&inch);
    printf("身高是%f米\n",((foot+inch/12.0)*0.3048));
    //printf("%f",10.0/3);
    return 0;
}