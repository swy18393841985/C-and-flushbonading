/*编译预处理指令*/
#include<stdio.h>

//const double PI=3.14159;
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f",PI);\
            printf("%f",PI2)

int main()
{
    printf(FORMAT,2*PI*3.0);
    printf(FORMAT,PI2);
    printf("%s:%d\n",__FILE__,__LINE__);
    printf("%s,%s\n",__DATE__,__TIME__);
    return 0;
    
}

/*预定义的宏*/
//__LINE__
//__FILE__
//__DATE__
//__TIME__
//__STDIC__