/*按位运算*/
/*
&按位与
|按位或
~按位取反
^按位异或
<<左移
>>右移*/

/*按位与的常用的两种应用：
    1.让某一位或某些位为0：x&0xfe
    2.取一个数中的一段:x&0xff
*/

/*按位或的常用的两种应用：
    1.使得一位或几个位为1：x|0x01
    2.把两个数拼起来：0x00FF|0xFF00
*/
#include<stdio.h>

int main()
{
    unsigned char c=0xAA;
    printf("c=%hhx\n",c);
    printf("~c=%hhx\n",(char)~c);//计算取反之后的值
    printf("-c=%hhx\n",(char)-c);//计算补码
    return 0;
}