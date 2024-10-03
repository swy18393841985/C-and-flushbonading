#include<stdio.h>
int main()
{
    char ac[]={0,1,2,3,4,5,6,7,8,9,-1};
    char *p=&ac[0];//*p->ac[0]
    char *p1=&ac[5];
    printf("ac1=\n");
    for(int i=0;i<sizeof(ac)/sizeof(ac[0]);i++){
        printf("%d ",ac[i]);
    }
    printf("\n");
    printf("ac2=\n");
    while (*p!=-1)
    {
        printf("%d ",*p++);
    }
    printf("\n");
    
    printf("p1-p=%d\n",p1-p);
    printf("p=  %p\n",p);
    printf("p+1=%p\n",p+1);
    printf("*(p+1)=%d\n",*(p+1));
    int ai[]={0,1,2,3,4,5,6,7,8,9};
    int *q=ai;
    int *q1=&ai[5];
    printf("q1-q=%d\n",q1-q);
    printf("q  =%p\n",q);
    printf("q+1=%p\n",q+1);
    printf("*(q+1)=%d\n",*(q+1));
    return 0;
}

/**p++ */
/*
取出p所指的那个数据来，完事后将p移动到下一位
常用与数组类的连续空间操作*/

/*指针是可以被比较的*/

/*0地址*/
/*  指针不可以拥有0地址
NULL是一个预定的符号，可以用它来表示一些特殊的东西*/

/*指针的类型*/
/*无论指向什么类型，所有的指针大小都是一样的，因为都是地址
但是指向不同类型的指针是不能直接相互赋值的
这是为了避免用错指针*/

/*指针的类型转化*/
/*
·void*表示不知道指向啥类型的指针
·计算时与char*相同（不相通）
·指针也可以做类型转换
·int*p=&i；void *q=(void*)p；
·这并没有改变p所指的变量的类型，而是让后人用不同的眼光去通过p看它所指的变量
*/