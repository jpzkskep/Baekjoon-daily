#include <stdio.h>
int main(void) {
    int x,y;
    scanf("%d %d",&x,&y);
    if (x>0 && y>0) printf("1");
    else if (x<0 && y>0) printf("2");
    else if (x<0 && y<0) printf("3");
    else if (x>0 && y<0) printf("4");
    return 0;
}