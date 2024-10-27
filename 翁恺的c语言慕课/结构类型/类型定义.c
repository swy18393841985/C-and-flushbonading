/*自定义数据类型*/
/*typedef*/
/*声明新的类型的名字
    新的名字是某种类型的别名*/
typedef int Length;//Length就等价于int类型
typedef char* Strings[10];//Strings是十个字符串的数组的类型
typedef struct node{
    int data;
    struct node *next;
} aNode;//这样就可以用aNode代替struct node