#ifndef __MAX_H_
#define _MAX_H_

int max(int a,int b);
extern int gAll;

#endif
/*前向声明
#ifndef __LIST_HEAD__
#define __LIST_HEAD__

struct Node;

typedef struct_list{
    struct Node *head;
    struct Node *tail;
}
#endif
这个地方不知道Node是怎样的，所以可以用struct Node来告诉编译器Node是一个结构
*/