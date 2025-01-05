#include"node.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct _list{
    Node *head;
    Node *tail;
}List;

void add(List *pList,int number);

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