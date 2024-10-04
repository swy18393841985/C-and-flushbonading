/*strcpy*/
/*char *strcpy(char *restrict dst,const char *restrict src);
把src的字符串拷贝到dst
restrict，不重叠
返回dst*/
/*char *dst=(char*)malloc(strlen(src)+1)*/
#include<stdio.h>
#include<string.h>
char*mycopy(char*dst,const char *src){
    // int index=0;
    // while(src[index]){
    //     dst[index]=src[index];
    //     index++;
    // }
    // dst[index]='\0';
    char *ret=dst;
    while(*dst++=*src++);
    *dst='\0';
    return dst;
}
int main()
{
    char s1[]="abc";
    char s2[]="ABC";
    strcpy(s1,s2);
    // for(int i=0;i<strlen(s1);i++){
    //     printf("%s ",s1[i]);
    // }
    return 0;
}