/*二维数组*/

/*int a[3][5]*/
/*a[i][j]b表示第i行第j列的元素*/

/*初始化*/
//int a[][5]={{0,1,2,3,4},{2,3,4,5,6}}
//列数是必须给出的，行数可以让编译器来数

/*tic-tac-toe*/
#include<stdio.h>

int main()
{
    const int size=3;
    int board[size][size];
    int i,j=0;
    int numOfX=0;
    int numOfO=0;
    int result=-1;//-1:没人赢，1：X赢，0：O赢

    //读入矩阵
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&board[i][j]);
        }
    }
    
    //检查行
    for(i=0;i<size&&result==-1;i++){
        numOfO=numOfX=0;
        for(j=0;j<size;j++){
            if(board[i][j]==1){
                numOfX++;
            }else{
                numOfO++;
            }
        }
        if (numOfO==size){
            result=0;
        }else if(numOfX==size){
            result=1;
        }
    }

    //检查列
    for(j=0;j<size&&result==-1;j++){
        numOfO=numOfX=0;
        for(i=0;i<size;i++){
            if(board[i][j]==1){
                numOfX++;
            }else{
                numOfO++;
            }
        }
        if (numOfO==size){
            result=0;
        }else if(numOfX==size){
            result=1;
        }
    }

    //检查对角线
    numOfO=numOfX=0;
    for(i=0;i<size&&result==-1;i++){     
        if(board[i][i]==1){
            numOfX++;
        }else{
            numOfO++;
        }
    }
    if (numOfO==size){
        result=0;
    }else if(numOfX==size){
        result=1;
    }
    numOfO=numOfX=0;
    for(i=0;i<size&&result==-1;i++){
        if(board[i][size-i-1]==1){
            numOfX++;
        }else{
            numOfX++;
        }
    }
    if (numOfO==size){
        result=0;
    }else if(numOfX==size){
        result=1;
    }

    if(result==-1){
        printf("no body win");
    }else if(result==0){
        printf("O win");
    }else{
        printf("x win");
    }
    return 0;
}