#include<stdio.h>

// int main()
// {
//     int a,b=0;
//     scanf("%d %d",&a,&b);
//     int min=0;
//     if(a<b){
//         min=a;
//     }else{
//         min=b;
//     }
//     int ret=0;
//     int i;
//     for(i=1;i<min;i++){
//         if(a%i==0){
//             if(b%i==0){
//                 ret=i;
//             }
//         }
//     }
//     printf("the greatest common divisor is%d.\n",ret);
//     return 0;
// }

//辗转相除法
int main()
{
    int a,b;
    int t;
    scanf("%d %d",&a,&b);
    while(b!=0){
        t=a%b;
        a=b;
        b=t;
    }
    printf("gcd=%d\n",a);
    return 0; 
}