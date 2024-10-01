//单向循环链表的应用：约瑟夫问题
#include<stdio.h>
#include<stdlib.h>
typedef struct node_t
{
    int data;
    struct node_t *next;
}link_node_t,*link_list_t;
int main()
{
    link_list_t h=NULL;//用于指向头节点
    link_list_t pdel=NULL;//用于指向被删除节点
    link_list_t ptail=NULL;//用于指向当前链表的尾
    link_list_t pnew=NULL;//用于指向新创建的节点
    int kill_num;//数到几淘汰猴子
    int start_num;//从几号猴子开始
    int all_sum;//总数
    printf("please input monkey all_sum:");
    scanf("%d",&all_sum);
    printf("please input start_num: ");
    scanf("%d",&start_num);
    printf("please input monkey kill_num:");
    scanf("%d",&kill_num);
    h=(link_list_t)malloc(sizeof(link_node_t));
    if (h==NULL){
        printf("error");
        return -1;
    }
    h->data=1;
    h->next=NULL;
    ptail=h;//尾指针指向第一个节点
    for(int i=2;i<=all_sum;i++){
        pnew=(link_list_t)malloc(sizeof(link_node_t));
        if(pnew==NULL){//创建新节点
            printf("error");
            return -1;
        }
        pnew->data=i;//为新节点赋值
        pnew->next=NULL;
        ptail->next=pnew;//将新节点连接到链表尾部
        ptail=pnew;//尾指针跟随移动到尾部
    }
    ptail->next=h;
    //开始淘汰猴子
    for(int i=0;i<start_num-1;i++){//将头指针移动到开始的猴子号码处
        h=h->next;
    }//循环惊醒淘汰猴子
    while(h!=h->next){//条件不成立的时候，就剩一个猴子，只有一个节点
        for(int i=0;i<kill_num-2;i++){//将头指针移动到即将删除节点的前一个结点
            h=h->next;
        }
        pdel=h->next;
        h->next=pdel->next;//跨过删除节点
        printf("kill %d\n",pdel->data);
        free(pdel);
        pdel=NULL;
        h=h->next;//淘汰该猴子后，从下一个节点继续开始数，将头指针移动到开始数的地方
    }
    printf("king is %d",h->data);//国王产生
    return 0;
}