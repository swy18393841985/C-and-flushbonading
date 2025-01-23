/*格式化输入输出*/

/*控制输出格式：求圆的面积和周长，其结果按要求格式输出。
const double PI = 3.141592653589;
double radius, area, perimeter;
scanf("%lf", &radius);
area = PI * radius * radius;
perimeter = 2 * radius * PI;
printf("Radius = %6.2f\n", radius);
printf("Area = %6.2f\n", area);
printf("Perimeter = %6.2f\n\n", perimeter);
printf("Radius    = %6.2f\n", radius);
printf("Area      = %6.2f\n", area);
printf("Perimeter = %6.2f\n\n", perimeter);
printf("   Radius = %6.2f\n", radius);
printf("     Area = %6.2f\n", area);
printf("Perimeter = %6.2f\n\n", perimeter);
printf("%12s = %6.2f\n", "Radius", radius);
printf("%12s = %6.2f\n", "area", area);
printf("%12s = %6.2f\n\n", "perimeter", perimeter);
printf("%-12s = %6.2f\n", "Radius", radius);
printf("%-12s = %6.2f\n", "area", area);
printf("%-12s = %6.2f\n", "perimeter", perimeter);*/

//输入数据类型一致
/*double r;
scanf("%lf", &r);
上述程序中变量 r 定义数据类型是 double ，此处不能用 scanf("%f", &r ) ，
因为%lf代表输入的数据类型是 double ，%f 代表输入的数据类型是 float 。
输入数据类型要一致*/

//原样输入
/*float r;
scanf("r = %f", &r);
上述程序运行时，可以输入 r=3.14，也可以输入 r=3.1415，注意 r= 不能丢，因为 
scanf( ) 函数的第一个参数中有“r = ”，所以必须原样输入。
输入后，3.14 或 3.1415 将被读入到变量 r 中。另外，变量 r 前面的取变量地址符
“&”不能省。这里是程序设计初学者经常会出错的地方。*/
#include <stdio.h>

int main() {
    long long n;
    
    // 读取输入的整数 n
    scanf("%lld", &n);
    
    int L = 0;
    int position = 1; // 位数从1开始
    
    while (n > 0) {
        int digit = n % 10; // 获取当前个位数字
        L += position * digit; // 计算贡献并累加到L
        n /= 10; // 去掉个位数字
        position++; // 位数加1
    }
    
    // 输出结果
    printf("%d\n", L);
    
    return 0;
}
