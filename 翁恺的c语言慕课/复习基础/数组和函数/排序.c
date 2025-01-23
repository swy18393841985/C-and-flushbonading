#include<stdio.h>

int max(int *a,int len);
void swap(int *a,int*b);

int main()
{
    int a[]={2,45,6,12,87,34,90,24,23,11,65};
    int len=sizeof(a)/sizeof(a[0]);
    //swap(a[maxid],a[len-1])
    for(int i=len-1;i>0;i--){
        int maxid=max(a,i+1);
        // int t=a[maxid];
        // a[maxid]=a[i];
        // a[i]=t;
        swap(&a[maxid],&a[i]);
        printf("%d\n",maxid);
    }
    for (int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

int max(int *a,int len)
{
    int max_num=0;
    int i=0;
    for(i=0;i<len;i++){
        if(a[max_num]<a[i]){
            max_num=i;
        }
    }
    return max_num;
}

void swap(int *a,int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
}