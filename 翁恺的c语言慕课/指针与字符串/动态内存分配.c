#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number;
    int *a;
    printf("请输入数量：");
    scanf("%d\n",&number);
    //inta[number];
    a=(int*)malloc(number*sizeof(int));
    for (int i=0;i<number;i++){
        scanf("%d\n",&a[i]);
    }
    for (int i=number-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
    free(a);//记得释放这块内存
    return 0;
}

/*malloc*/
/*#include<stdlib.h>
void*malloc(size_t size)
向malloc申请的空间大小是以字节为单位的
返回的结果是void*，需要类型转换为自己所需要的类型*/