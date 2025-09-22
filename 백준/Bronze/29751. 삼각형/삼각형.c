#include <stdio.h>

int main(void) {
    int w,h;
    double area;
    scanf("%d %d",&w,&h);
    area=(float)w*h/2;
    printf("%.1f",area);
    return 0;
}