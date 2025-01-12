/*格式字符串*/
//%[flags][width][.prec][hlL]type
#include<stdio.h>

int main()
{
    printf("%9d\n",123);
    printf("%-9d\n",123);
    printf("%9.2f\n",123.0);
    printf("%*d\n",6,123);
    printf("%hhd",(char)12345);
    int num;
    printf("%dyt%n\n",12345,&num);
    printf("%d\n",num);
    int num1;
    scanf("%*d%d",&num1);
    printf("%d\n",num1);
    return 0;
}