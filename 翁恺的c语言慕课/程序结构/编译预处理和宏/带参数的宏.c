//#define cube(x) ((x)*(x)*(x))
//宏可以带参数
#include<stdio.h>

#define cube(x) ((x)*(x)*(x))
#define RADTODEG1(x) (x*57.29578)
#define RADTODEG2(x) (x)*57.29578

int main()
{
    int i=1;
    //scanf("%d",&i);
    printf("%d\n",cube(1));
    printf("%f\n",RADTODEG1(5+2));
    printf("%f\n",RADTODEG2(1));
    return 0;
}
/*一切都要有括号
可以带多个参数
#define MIN(a,b) ((a)>(b)?(a):(b))*/