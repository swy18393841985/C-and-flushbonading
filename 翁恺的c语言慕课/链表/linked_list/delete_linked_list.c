#include"node.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct _list{
    Node *head;
    Node *tail;
}List;

void add(List *pList,int number);
void print(List *pList);

int main()
{
    List list;
    list.head=list.tail=NULL;
    int number;
    do{
        scanf("%d",&number);
        if(number!=-1){
            add(&list,number);      
        }
    }while(number!=-1);
    print(&list);
    scanf("%d",&number);
    int cnt=1;
    int isFound=0;
    Node *p;
    for (p=list.head;p;p=p->next){
        if(p->value==number){
            isFound=1;
            printf("The number you search is at the position of %d.\n",cnt);
            break;
        }
        cnt++;
    }
    if(!isFound){
        printf("Not Found!\n");
    }
    Node *q;
    for(q=NULL,p=list.head;p;q=p,p=p->next){
        if(p->value==number){
            if(q){
                q->next=p->next;
            }else{
                list.head=p->next;
            }
            free(p);
            break;
        }
    }
    for(p=list.head;p;p=q){
        q=p->next;
        free(p);
    }

    return 0;
} 

void add(List *pList,int number)
{
    //add to Linked_list
    Node *p=(Node*)malloc(sizeof(Node));
    if(p==NULL){
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    p->value=number;
    p->next=NULL;
    if(pList->head==NULL){
        pList->head=p;
        pList->tail=p;
    }else{
        pList->tail->next=p;
        pList->tail=p;
    }
       
}
void print(List *pList)
{
    Node *p;
    for(p=pList->head;p;p=p->next){
        printf("%d\t",p->value);
    }
    printf("\n");
}