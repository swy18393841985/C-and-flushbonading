#include<stdio.h>
#include<string.h>
int mycmp(const char* s1,const char* s2);
int main()
{
    char a1[]="abc";
    char a2[]="Abc";
    printf("%d\n",a1==a2);
    printf("%d\n",strcmp(a1,a2));
    printf("%d\n",mycmp(a1,a2));
    return 0;
}
int mycmp(const char* s1,const char* s2)
{
    // int index=0;
    // while(s1[index==s2[index]&&s1[index]!="\0"]){
    //     if (s1[index]!=s2[index]){
    //         break;
    //     }else if(s1[index]=="\0"){
    //         break;
    //     }
    //     index++;
    // }
    // return s1[index]-s2[index];
    while(*s1==*s2&& (*s1)!="\0"){
        s1++;
        s2++;
    }
    return *s1-*s2;
}