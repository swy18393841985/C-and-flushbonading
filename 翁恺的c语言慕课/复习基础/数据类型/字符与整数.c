/*字符与整数*/

/*由于字符可以看做一个小整数（字符的ASCII码，0~127），字符与整数
有时可以等价地看待。由于字符占一个字节，整数转换成字符时，将超出 
8 位的高位全部丢掉。*/

/*算术转换：如果一个运算符，有不同类型的运算对象，那么“较低”类型
会自动转换成“较高”类型，如在算术表达式中普通整数（ int ）和无符
号整数（ unsigned ）混合使用，则普通整数将自动转换成无符号整数。*/

/*字符型char*/
/*用于存放字符，声明的变量占一个字节，数据范围是-128~127或0~255*/

//【【C语言】数据类型一文详解 - CSDN App】https://blog.csdn.net/zhh763984017/article/details/118057831?sharetype=blog&shareId=118057831&sharerefer=APP&sharesource=2401_82734998&sharefrom=link

//long longlong long: 通常为64位，表示带符号的长长整数，范围约
//为 -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807。

#if 0

#include<stdio.h>
int main(void) {
 
    char c_baiyu = 'a';//字符型数据占1个字节 
    short s_baiyu = 11;//短整型数据占2个字节 
    
    int i_baiyu = 97;//整型数据占4个字节 
    long l_baiyu = 666;//长整型数据占4个字节 
    
    float f_baiyu = 5.0;//单精度浮点型数据占4个字节 
    double d_baiyu = 2.22222;//双精度浮点型占8个字节 
    
    printf("字符型数据 c_baiyu 占 %d 个字节\n",sizeof(c_baiyu));
    printf("短整型数据 s_baiyu 占 %d 个字节\n",sizeof(s_baiyu));
 
    printf("整型数据 i_baiyu 占 %d 个字节\n",sizeof(i_baiyu));
    printf("长整型数据 l_baiyu 占 %d 个字节\n",sizeof(l_baiyu));
    
    printf("单精度浮点型数据 f_baiyu 占 %d 个字节\n",sizeof(f_baiyu));
    printf("双精度浮点型数据 d_baiyu 占 %d 个字节\n",sizeof(d_baiyu));
    
    unsigned int ui_baiyu =999;
    unsigned short us_baiyu =10;
    unsigned long ul_baiyu =456;
    
    printf("无符号整型数据 ui_baiyu 占 %d 个字节\n",sizeof(ui_baiyu));
    printf("无符号短整型数据 us_baiyu 占 %d 个字节\n",sizeof(us_baiyu));
    printf("无符号长整型数据 ul_baiyu 占 %d 个字节\n",sizeof(ul_baiyu));
    
    return 0;
}

#endif

#include <stdio.h>
int main()
{
    char c_baiyu = 'a';//字符类型
    char c_baiyu_1 = 97;//字符类型也可以用ASCII码赋值
    
    printf("字符型数据 c_baiyu:%c\n",c_baiyu) ;
    printf("字符型数据 c_baiyu_1:%c\n",c_baiyu_1) ;
    printf("%d\n",c_baiyu_1);
    
    short s_baiyu = 11;
    printf("短整型数据 s_baiyu:%d\n",s_baiyu) ;
    
    int i_baiyu = 100;
    printf("整型数据 i_baiyu:%d\n",i_baiyu) ;
    
    long l_baiyu = 666;
    printf("长整型数据 l_baiyu:%d\n",l_baiyu) ;
    
    float f_baiyu = 1.0;
    printf("单精度浮点型数据 f_baiyu:%f\n",f_baiyu) ;
    
    double d_baiyu = 2.22222;
    printf("双精度浮点型数据 d_baiyu:%f\n",d_baiyu) ;
        
    return 0;
}