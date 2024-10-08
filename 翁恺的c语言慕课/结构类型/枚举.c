/*枚举量可以作为值*/
/*枚举类型可以跟上enum作为类型*/
/*但是实际上是以整数来做内部计算和外部输入输出的*/
/*默认枚举量是从0开始*/
#include<stdio.h>
enum COLOR{RED,YELLOW,GREEN};
int main()
{
    int color=-1;
    char *colorName=NULL;
    printf("输入你喜欢的颜色的代码：");
    scanf("%d",&color);
    switch (color)
    {
    case RED:
        colorName="red";
        break;
    case YELLOW:
        colorName="yellow";
        break;
    case GREEN:
        colorName="green";
        break;
    default:
        colorName="unknow";
        break;
    }
    printf("你喜欢的颜色是%s\n",colorName);
    return 0;
}