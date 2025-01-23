/*搜索*/
#include<stdio.h>

int search(int key,int a[],int len);

int amount[]={1,5,10,25,50};
char *name[]={"penny","nickel","dime","quarter","half-dollar"};

int main()
{
    int k=10;
    int ret=search(5,amount,sizeof(amount)/sizeof(amount[0]));
    if(ret!=-1){
        printf("%s\n",name[ret]);
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