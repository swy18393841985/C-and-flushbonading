/*在文件中定位*/
/*long ftell(FILE *stream);
int fseek(FILE *stream,long offset,int whence);
    SEEK_SET:从头开始
    SEEK_CUR:从当前位置开始
    SEEK_END:从尾开始（倒过来）*/
#include<stdio.h>
#include"student.h"

void read(FILE *fp,int index);

int main()
{
    FILE *fp=fopen("student.data","r");
    if(fp){
        fseek(fp,0L,SEEK_END);
        long size =ftell(fp);
        int number =size/sizeof(Student);
        int index=0;
        printf("there are %d datas,which one you want:",number);
        scanf("%d",&index);
        read(fp,index-1);
        fclose(fp);
    }
    return 0;
}

void read(FILE *fp,int index)
{
    fseek(fp,index*sizeof(Student),SEEK_SET);
    Student stu;
    if(fread(&stu,sizeof(Student),1,fp)==1){
        printf("the %d student",index+1);
        printf("\tname:%s\n",stu.name);
        printf("\tgender:");
        switch(stu.gender){
            case 0:printf("man\n");break;
            case 1:printf("woman\n");break;
            case 2:printf("else\n");break;
        }
        printf("\tage:%d\n",stu.age);
    }
}