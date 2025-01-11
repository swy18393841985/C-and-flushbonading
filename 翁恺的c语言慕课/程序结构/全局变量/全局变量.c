#include<stdio.h>

int f(void);

int gAll=12;

int main()
{
    printf("in %s gAll=%d\n",__func__,gAll);
    f();
    printf("agn in %s gAll=%d\n",__func__,gAll);
    return 0;
}

int f()
{
    printf("in %s gAll=%d\n",__func__,gAll);
    gAll+=2;
    printf("agn in %s gAll=%d\n",__func__,gAll);
    return gAll;
}
//没有做初始化的全局变量会得到0值
/*指针会得到NULL
同名的本地变量会把全局变量隐藏*/