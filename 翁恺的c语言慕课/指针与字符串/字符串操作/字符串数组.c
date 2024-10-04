/*字符串数组*/
/*char *a
a是一个指针，指向另一个指针，那一个指针指向一个字符(串)
char a[][number]*/
#include<stdio.h>
int main(int argc,char const *argv[])
{
    int i;
    for (i=0;i<argc;i++){
        printf("%d:%s\n",i,argv[i]);
    }
    return 0;
}