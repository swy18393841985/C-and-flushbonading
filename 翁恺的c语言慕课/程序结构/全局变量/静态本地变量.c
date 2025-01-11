/*在本地变量前面加上static关键词*/
#include<stdio.h>

int f(void);

int gAll=12;

int main()
{
    f();
    printf("agn in %s gAll=%d\n",__func__,gAll);
    return 0;
}

int f()
{
    int k=0;
    static int all=1;
    printf("&gAll=%p\n",&gAll);
    printf("&all =%p\n",&all);
    printf("&k=   %p\n",&k);
    printf("in %s all=%d\n",__func__,all);
    all+=2;
    printf("agn in %s all=%d\n",__func__,all);
    return all;
}

/*静态本地变量是特殊的全局变量*/