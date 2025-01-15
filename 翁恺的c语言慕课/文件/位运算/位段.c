/*位段*/
//把一个int的若干位组合为一个结构
/*
struct{
    unsigned int leading:3;
    unsigned int FLAG1:1;
    unsigned int FLAG2:1;
    int trailing:11;
}
*/
#include<stdio.h>

void prtBin(unsigned int number);

struct U0{
    unsigned int leading : 3;
    unsigned int FLAG1 : 1;
    unsigned int FLAG2 : 1;
    int trailing : 27;
};

int main()
{
    struct U0 uu;
    uu.leading=2;
    uu.FLAG1=0;
    uu.FLAG2=1;
    uu.trailing=0;
    printf("sizeof(uu)=%lu\n",sizeof(uu));
    prtBin(*(int *)&uu);

    return 0;
}

void prtBin(unsigned int number)
{
    unsigned mask=1u<<31;
    for (;mask;mask>>=1){
        printf("%d",number&mask?1:0);
    }
    printf("\n");
}

/*位段*/

/*
·可以直接用位段的成员名称来访问
·比移位、与、或方便
·编译器会安排其中的位的排列，不具有可移植性
·当所需的位超过一个int时会采用多个int
*/