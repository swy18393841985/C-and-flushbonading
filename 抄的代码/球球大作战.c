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
//判断玩家能否吃食物
void gamer_eatFood(Sprite *gamer,Sprite *foods)
{
    //遍历食物数组
    for (int i=0;i<FOODNUM;i++){
        //圆心距离小于玩家的半径，就可以吃食物
        if(!foods[i].isDie && distance(gamer,foods+i)<gamer->r){
            //玩家变大
            gamer->r+=foods[i].r/8;
            //食物消失
            foods[i].isDie=true;
        }
    }
}
//追击算法
void chase(Sprite *chase,Sprite *run)
{
    //run在哪里
    if(chase->x>run->x){
        chase->x--;
    }else{
        chase->x++;
    }
}
//让ai动起来
void ai_move(Sprite *ais,Sprite *foods)
{
    int minDis=getwidth();//距离
    //吃最劲的食物
    for (int i=0;i<FOODNUM;i++){
        if(foods[i].isDie){
            continue;
        }
        for(int k=0;k<AINUM;k++){
            if(ais[k].isDie){
                continue;
            }
            //开始判断
            double dis=distance(foods+i,ais+k);
            if (dis<minDis){
                minDis=dis;
                ais[k].index=k;
            }
        }
    }
    for (int i=0;i<AINUM;i++){
        if(!foods[ais[i].index].isDie){
            //开始追击
            chase(ais+i,foods+ais[i].index);
        }
    }
}
//来追我
//追比自己半径小的ai
void ai_eatFood(Sprite *ais,Sprite *foods)
{
    for(int i=0;i<AINUM;i++){
        if(ais[i].isDie){
            continue;
        }
        for (int k=0;k<FOODNUM;k++){
            if(!foods[k].isDie&&distance(ais+i,foods+k)<ais[i].r)
            {
                ais[i].r+=foods[ais[i].index].r/8;
                foods[ais[i].index].isDie=true;            
            }
        }
    }
}

//定义全局变量，鼠标点一个位置，然后按住Alt键
Sprite gamer;//玩家
Sprite food[FOODNUM];//食物的数组
Sprite ai[AINUM];//人工智障 联机

//初始化所有数据
void init()
{
    //设置随机数中
    srand(time(NULL));
    spr_init(&gamer,1024/2,640/2,10,3);
    //初始化所有的食物
    for (int i=0;i<FOODNUM;i++){
        int x=rand()%getwidth();//保证生成的坐标在屏幕内
        int y=rand()%getheight();
        int r=rand()%5+2;
        spr_init(food+i,x,y,r,0);
    }
    //初始化人机
    for (int i=0;i<AINUM;i++){
        int r=rand()%10+10;//[10,19)
        int x=rand()%(getwidth()-r);//保证生成的坐标在屏幕内
        int y=rand()%(getheight()-r);
        spr_init(ai+i,x,y,r,rand()*3+1);
    }
}
//绘制所有精灵
void draw()
{
    spr_draw(&gamer);
    //绘制所有食物
    for(int i=0;i<FOODNUM;i++){
        spr_draw(food+i);
    }
    //绘制ai
    for(int i=0;i<AINUM;i++){
        spr_draw(ai+i);
    }
}
int main()
{
    initgraph(1024,640,0);//创建窗口
    setbkcolor(WHITE);//设置背景颜色
    cleardevice();//用设置的颜色填充屏幕
    init();
    while(true){
        //获取一下时间
        int startTime=clock();
        BeginBatchDraw();//开启双缓冲
        cleardevice();//绘制之前先清屏

        draw();
        gamer_move(&gamer);//移动，不断地接收键盘按键，移动的是坐标
        gamer_eatFood(&gamer,food);
        ai_move(ai,food);
        ai_eatFood(ai,food);
        EndBatchDraw;//结束双缓冲

        //控制游戏帧数 60，24
        int frameTime=clock()-startTime;//计算一帧持续多久
        if(frameTime<SCREEN_TICK_PER_FRAME)
        {
            Sleep(SCREEN_TICK_PER_FRAME-frameTime);//程序休眠20ms
        }
    }
    getchar();//防止休眠
    return 0;
}