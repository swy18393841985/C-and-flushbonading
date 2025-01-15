/*FILE*/
/*FILE *fopen(const char *restrict path,const char *restrict mode);
int fclose(FILE *stream);
fscanf(FILE *,);
fprintf(FILE *,);*/

/*标准代码*/
/*
FILE *fp=fopen("file","r");
if(fp){
    fscanf(fp,...);
    fclose(fp);
}else{
    ....
}
*/
#include<stdio.h>

int main()
{
    FILE *fp=fopen("12.in","r");
    if(fp){
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        fclose(fp);
    }else{
        printf("open file failed\n");
    }
    return 0;
}

/*fopen()*/
/*
r   打开只读
r+  打开读写，从头开始
w   打开只写，如果不存在则新建，如果存在就清空
w+  打开读写，如果不存在就新建，如果存在就清空
a   打开追加，如果不存在就新建，如果存在就从文件末尾开始
..x 只新建，如果文件已存在则不能打开
*/