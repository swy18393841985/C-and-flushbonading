#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<easyx.h>

#define RGB(r,g,b) ((COLORREF)(((BYTE)(r)|((WORD)((BYTE)(g))<<8))|(((DWORD)(BYTE)(b))<<16)))
#define SCREEN_TICK_PER_FRAME (1000/60.0)//每一帧需要的毫秒数
#define FOODNUM 200//食物数量
#define AINUM 10//人机数量
#define distance(spr1,spr2) sqrt(((spr1)->x-(spr2)->x)*((spr1)->x-(spr2)->x)+((spr1)->y-(spr2)->y)*((spr1)->y-(spr2)->y))
//精灵
typedef struct Sprite
{
    double x;
    double y;
    double r;//半径
    double speed;//移动速度
    bool isDie;//是否死了
    COLORREF color;//颜色
    int index;//追击下标
}Sprite;
/*初始化精灵*/
void spr_init(Sprite*spr,int x,int y,int r,int speed)
{
    spr->x=x;
    spr->y=y;
    spr->r=r;
    spr->speed=speed;
    spr->color=RGB(rand()%256,rand()%256,rand()%256);
    spr->isDie=false;

    spr->index=1;
}
void spr_draw(Sprite *spr)
{
    if (!spr->isDie){
        //设置填充颜色
        setfillcolor(spr->color);
        //绘制一个圆
        solidcircle(spr->x,spr->y,spr->r);
    }
}

void gamer_move(Sprite*gamer)
{
    if (GetAsyncKeyState(VK_UP))
    {
        gamer->y-gamer->speed;
    }
    if (GetAsyncKeyState(VK_DOWN)){
        gamer->y+=gamer->speed;
    }
    if (GetAsyncKeyState(VK_LEFT)){
        gamer->x-=gamer->speed;
    }
    if (GetAsyncKeyState(VK_RIGHT)){
        gamer->x+=gamer->speed;
    }
}