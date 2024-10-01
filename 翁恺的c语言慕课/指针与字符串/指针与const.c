/*所指是const*/
/*不可以通过指针去修改一个变量*/
int i=0;
const int *p=&i;
*p=26;//ERROR!（*p）是const

/*判断那个被const的标志是const在*之前还是之后*/
/*为了保护数组，可以设置参数为const*/