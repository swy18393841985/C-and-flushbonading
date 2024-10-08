/*字符串中找字符*/
/*char *strchr(const char *S,int c);
char strrchr(const char*s,int c);
返回NULL表示没有找到
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[]="hello";
    char *p=strchr(s,'l');
    char *t=(char*)malloc(strlen(p)+1);
    char c=*p;
    *p='\0';
    strcpy(t,s);
    printf("%s\n",t);
    printf("%s\n",p);
    free(t);
    return 0;
}
/*char *strstr(const char*s1,const char *s2)
char *strcasestr(const char *s1,const char *s2)(忽略大小写)*/ 