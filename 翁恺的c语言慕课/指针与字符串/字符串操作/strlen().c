/*strlen*/
/*size_t strlen(const char *s)
返回字符串的长度，不包含末尾的0*/
#include<stdio.h>
#include<string.h>
size_t mylen(const char *s)
{
    int index=0;
    while(s[index]!='\0'){
        index++;
    }
    return index;
}
int main()
{
    char line[]="hello";
    printf("strlen=%zu\n",strlen(line));
    printf("mylen=%zu\n",mylen(line));
    printf("sizeof=%zu\n",sizeof(line));
    return 0;
}