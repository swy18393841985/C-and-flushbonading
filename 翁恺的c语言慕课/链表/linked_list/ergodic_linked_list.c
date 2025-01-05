#include"node.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct _list{
    Node *head;
    //Node *tail;
}List;

int main()
{
    List list;
    list.head=NULL;
    int number;
    do{
        scanf("%d",&number);
        if(number!=-1){
           add(&list,number);      
        }
    }while(number!=-1);
    return 0;
} 
void add(List *pList,int number){
    //add to Linked_list
    Node *p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
    //find the last
    Node *last=pList->head;
    if (last){
        while(last->next){
            last=last->next;
        }
        //attach
        last->next=p;
    }else{
        pList->head=p;
    }
}