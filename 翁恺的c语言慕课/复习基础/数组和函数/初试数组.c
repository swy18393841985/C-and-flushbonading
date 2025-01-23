/*定义数组*/
/*
·<类型> 变量名称[元素数量]
·元素数量必须是整数
·一旦创建，不能改变大小
·数组下标越界不会被编译器检测，segmenta fault
*/

/*写一个程序，输入数量不确定呢的[0,9]范围内的整数，统计每一个数字出现的次数，输入-1表示结束*/
#include<stdio.h>

int main()
{
    const int number=10;
    int x;
    int count[number];
    int i;

    for ( i = 0; i < number; i++){
        count[i]=0;
    }

    scanf("%d",&x);
    while(x!=-1){
        if(x>=0&&x<=9){
            count[x]++;
        }
        scanf("%d",&x);
    }

    for (i=0;i<number;i++){
        printf("%d:%d\n",i,count[i]);
    }
    return 0;
}

//很好的c知识点总结 https://github.com/wangdoc/clang-tutorial

/*C语言在调用函数时，永远是传值的*/

/*
·每个函数都有自己独立的变量空间，参数也位于这个独立的空间中，和其他函数没有关系
·我们认为，实参和形参之间就是值和参数的关系
*/
