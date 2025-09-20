#include <stdio.h>

int main(void) {
    int x1,x2,x3,y1,y2,y3;
    int xnum,ynum;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&x3,&y3);
    if (x1==x2) xnum=x3;
    else if (x1==x3) xnum=x2;
    else if (x2==x3) xnum=x1;
    if (y1==y2) ynum=y3;
    else if (y1==y3) ynum=y2;
    else if (y2==y3) ynum=y1;
    printf("%d %d",xnum,ynum);
    return 0;
}