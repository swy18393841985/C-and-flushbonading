/*指针最常见的错误*/
/*定义了指针变量，还没有指向任何变量就开始使用指针*/
#include<stdio.h>
void minmax(int a[],int len,int *max,int *min);
int main(void)
{
    int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
    int min,max;
    printf("main sizeof(a)=%lu\n",sizeof(a));
    printf("main a=%p\n",a);
    minmax(a,sizeof(a[0]),&min,&max);
    printf("a[0]=%d\n",a[0]);
    printf("min=%d,max=%d\n",min,max);
    int *p=&min;
    printf("*p=%d\n",*p);
    printf("p[0]=%d\n",p[0]);
    printf("*a=%d\n",*a);
    //int b[]-->const int *b
    return 0;
}
void minmax(int *a,int len,int *max,int *min)
{
    int i;
    printf("minmax sizeof(a)=%lu\n",sizeof(a));
    printf("minmax a=%p\n",a);
    *min=*max=a[0];
    for(i=1;i<len;i++){
        if (a[i]<*min){
            *min=a[i];
        }
        if (a[i]>*max){
            *max=a[i];
        }
    }
}
/*函数参数表内的数组实际上是指针
sizeof(a)==sizeof(int *)
可以用数组的运算符[]进行运算*/

/*数组变量是特殊的指针*/
/*int a[10];int*p=a;无需用&取地址符*/