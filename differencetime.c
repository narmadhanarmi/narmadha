#include<stdio.h>
struct time{
     int h,m,sec;
};
int main()
{
    time t1,t2,t3;
    int sec1,sec2,totalsec;
    printf("enter first time in HH:MM:SS:");
    scanf("%d:%d:%d",&t1.h,&t2.m,&t3.sec);
    sec1=t1,h*60*60+t1.m*60+t1.sec;
    sec2=t2.h*60*60+t2.m*60+t2.sec;
    totalsec=sec1-sec2;
    t3.m=total sec/60;
    t3.h=t3.m/60;
    t3.m=t3.m%60;
    t3.sec=totalsec%60;
    printf("time difference is :%02d:%02d:%02\n",t3.h,t3.m,t3.sec);
}
