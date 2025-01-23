/*正序输出数据*/
#include<stdio.h>

int main()
{
    int x=0;
    scanf("%d",&x);
    int mask=1;
    int t=x;//保存原来的x
    while (t>9){
        t/=10;
        mask*=10;
    }
    printf("x=%d,mask=%d\n",x,mask);
    do{
        int d=x/mask;
        printf("%d",d);
        if(mask>9){
            printf(" ");
        }
        x%=mask;
        mask/=10;
    }while(mask>0);
    printf("\n");
    return 0;
}