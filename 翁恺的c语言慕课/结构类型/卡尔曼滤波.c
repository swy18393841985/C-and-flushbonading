#include<stdio.h>
typedef struct{
    float filterValue;//滤波后的值
    float kalmanGain;//Kalamn增益
    float A;//状态矩阵
    float H;//观测矩阵
    float Q;//状态矩阵的方差
    float R;//观测矩阵的方差
    float P;//预测误差
    float B;
    float u;
}KalmanInfo;
//下面是卡尔曼滤波器的初始化函数，在这个函数中，info为卡尔曼滤波参数的指针。初始化的参数是针对一个车速滤波过程的设置。
void initKalmanFilter(KalmanInfo *info)
{
    info->A = 1;
    info->H = 1;
    info->P = 0.1;
    info->Q = 0.05;
    info->R = 0.1;
    info->B = 0.1;
    info->u = 0;
    info->filterValue = 0;
}
//卡尔曼滤波过程函数，函数的输入info为卡尔曼滤波参数的指针，new_value为新的测量值，函数返回滤波后的估计值。
float KalmanFilterFun(KalmanInfo *info, float new_value)
{
	float predictValue = info->A*info->filterValue+info->B*info->u;//计算预测值
    info->P = info->A*info->A*info->P + info->Q;//求协方差
    info->kalmanGain = info->P * info->H /(info->P * info->H * 
    info->H + info->R);//计算卡尔曼增益
    info->filterValue = predictValue + (new_value - 			 predictValue)*info->kalmanGain;//计算输出的值
    info->P = (1 - info->kalmanGain* info->H)*info->P;//更新协方差
    return info->filterValue;
}