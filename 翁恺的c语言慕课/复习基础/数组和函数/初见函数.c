/*函数是一块代码，接收0个或多个参数，做一件事情并返回零个或一个值*/

/*函数名(参数)*/
#include<stdio.h>

void SUM(int begin,int end);

int main()
{
    SUM(4,10);
    return 0;
}

void SUM(int begin,int end)
{
    int i;
    int sum=0;
    for(i=begin;i<=end;i++){
        sum+=1;
    }
    printf("the sum from %d to %d is %d\n",begin,end,sum);
}
