#include <stdio.h>
int main(void) {
    int h,m,overM;
    scanf("%d %d",&h,&m);
    overM=m+15;
    if (m-45>=0) printf("%d %d",h,m-45);
    else {
        if (h>0 && h<24) printf("%d %d",h-1,overM);
        else if (h==0) printf("%d %d",23,overM);
    }
    return 0;
}