#include<stdio.h>
#include"student.h"

void getList(Student aStu[],int number);
int save(Student aStu[],int number);

int main()
{
    int number=0;
    printf("please give me the number:");
    scanf("%d",&number);
    Student aStu[number];
    
    getList(aStu,number);
    if(save(aStu,number)){
        printf("save success\n");
    }else{
        printf("save failed\n");
    }
    return 0;
}

void getList(Student aStu[],int number)
{
    char format[STR_LEN];
    sprintf(format,"%%%ds",STR_LEN-1);//%19s

    int i;
    for (i=0;i<number;i++){
        printf("the position is %d:\n",i);
        printf("\tname:");
        scanf(format,&aStu[i].name);
        printf("\tgender:(0-man,1-woman,2-else)");
        scanf("%d",&aStu[i].gender);
        printf("\tage:");
        scanf("%d",&aStu[i].age);
    }
}

int save(Student aStu[],int number)
{
    int ret=1;
    FILE *fp=fopen("student.data","w");
    if(fp){
        ret=fwrite(aStu,sizeof(Student),number,fp);
        fclose(fp);
    }
    return ret==number;
}