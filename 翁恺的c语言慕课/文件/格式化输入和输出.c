/*格式字符串*/
//%[flags][width][.prec][hlL]type
#include<stdio.h>

int main()
{
    printf("%9d\n",123);
    printf("%-9d\n",123);
    printf("%9.2f\n",123.0);
    printf("%*d\n",6,123);
    printf("%hhd",(char)12345);
    int num;
    printf("%dyt%n\n",12345,&num);
    printf("%d\n",num);
    int num1;
    scanf("%*d%d",&num1);
    printf("%d\n",num1);
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
    printf("%-12s = %6.2f\n", "perimeter", perimeter);
    return 0;
}