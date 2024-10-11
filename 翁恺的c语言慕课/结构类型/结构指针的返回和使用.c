#include<stdio.h>
struct point{
    int x;
    int y;
};

struct point * getStruct(struct point*);
//struct point getStruct(void);
//void output(struct point*);
void output(struct point);
void print(const struct point *p);

int main()
{
    struct point y={0,0};
    //struct point *pStruct=&y;
    //getStruct(pStruct);
    //output (pStruct);
    getStruct(&y);
    printf("1\n");
    output(y);
    printf("2\n");
    output(*getStruct(&y));
    printf("3\n");
    print(getStruct(&y));
    return 0;
}


//void getStruct(struct point *p)
struct point* getStruct(struct point *p)
{
    // struct point p;
    // scanf("%d",&p.x);
    // scanf("%d",&p.y);
    // printf("%d %d\n",p.x,p.y);
    // return p;
    scanf("%d",&p->x);
    scanf("%d",&p->y);
    printf("%d,%d\n",p->x,p->y);
    return p;
}
// void output(struct point *p){
//     printf("%d %d",p->x,p->y);
// }
void output(struct point p){
    printf("%d,%d\n",p.x,p.y);
}
void print(const struct point *p){
    printf("%d %d\n",p->x,p->y);
}