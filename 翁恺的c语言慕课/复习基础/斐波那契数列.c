
#include<stdio.h>
int main()
{
    int result;
    int Fibonacci[46];
    
    int i;
    for (i=0;i<46;i++){
        if(i==0){
            Fibonacci[i]=0;
        }else if(i==1){
            Fibonacci[i]=1;    
        }else{
            Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
        } 
    }
    int index;
    int lines;
    scanf("%d",&lines);
    int a[lines];
    int z;
    for(z=0;z<lines;z++){
        scanf("%d",&index);
        a[z]=index;
    }
    int j;
    for(j=0;j<lines;j++){
        printf("%d\n",Fibonacci[a[j]]);
    }
    return 0;
}
