/*搜索*/
#include<stdio.h>

int search(int key,int a[],int len);

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int ret=search(7,a,sizeof(a)/sizeof(a[0]));
    if(ret!=-1){
        printf("index=%d\n",ret);
    }else{
        printf("NotFound");
    }
    return 0;
}

int search(int key,int a[],int len)
{
    int ret=-1;
    for(int i=0;i<len;i++){
        if(key==a[i]){
            ret=i;
            break;
        }
    }
    return ret;
}