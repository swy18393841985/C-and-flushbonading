/*返回本地变量的地址是危险的*/
/*返回全局变量和静态本地变量的地址是安全的*/
#include<stdio.h>

int *f();
void g(void);

int main()
{
    int *p=f();
    printf("*p=%d\n",*p);
    g();
    printf("*p=%d\n",*p);
    return 0;
}

int *f()
{
    int i=12;
    return &i;
}

void g(void)
{
    int k=24;
    printf("k=%d\n",k);
}