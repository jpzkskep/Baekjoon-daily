#include <stdio.h>
int main(void) {
    int x,y,w,h;
    int smallest;
    int num[4]={0};
    scanf("%d %d %d %d",&x,&y,&w,&h);
    num[0]=x;
    num[1]=y;
    num[2]=w-x;
    num[3]=h-y;
    smallest=num[0];
    for (int i=1; i<4; i++) {
        if (num[i]<smallest) smallest=num[i];
    }
    printf("%d",smallest);
    return 0;
}