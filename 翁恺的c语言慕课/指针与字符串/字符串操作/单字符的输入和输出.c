/*putchar()*/
/*int putchar(int c);
`向标准输出写一个字符
·返回类型是int是为了返回EOF(-1)
Windows->ctrl+Z*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int ch;
    while((ch=getchar())!=EOF){
        putchar(ch);
    }
    printf("EOF\n");
    return 0;
}