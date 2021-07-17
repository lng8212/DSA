#include<stdio.h>

int main (){
    long long  x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%lld%lld%lld%lld%lld%lld%lld%lld", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    long long vx1,vy1,vx2,vy2;
    vx1=x2-x1;
    vy1=y2-y1;
    vx2=x4-x3;
    vy2=y4-y3;
    if (((float)(vx1)/vy1) != ((float)(vx2)/vy2)) printf("YES!");
    else printf("NO");
}