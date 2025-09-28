#include <stdio.h>

int x[100001],y[100001];

int main(void) {
    int maxx,maxy,minx,miny;
    int n;
    scanf("%d",&n);
    if (n<2) {
        printf("0");
        return 0;
    }
    for (int i=0; i<n; i++) {
        scanf("%d %d",&x[i],&y[i]);
    }
    maxx=x[0];
    maxy=y[0];
    minx=x[0];
    miny=y[0];
    for (int i=0; i<n; i++) {
        if (x[i]>maxx) {
            maxx=x[i];
        }
        if (x[i]<minx) {
            minx=x[i];
        }
        if (y[i]>maxy) {
            maxy=y[i];
        }
        if (y[i]<miny) {
            miny=y[i];
        }
    }
    printf("%d",(maxx-minx)*(maxy-miny));
    return 0;
}