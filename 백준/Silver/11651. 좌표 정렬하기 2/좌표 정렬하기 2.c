#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
}point;

int compare(const void *a,const void *b);

int main(void) {
    point jum[100001];
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&jum[i].x,&jum[i].y);
    }
    
    qsort(jum,n,sizeof(point),compare);
    
    for (int i=0; i<n; i++) {
        printf("%d %d\n",jum[i].x,jum[i].y);
    }
    return 0;
}

int compare(const void*a,const void*b) {
    point num1=*(point*)a;
    point num2=*(point*)b;
    if (num1.y>num2.y) {
        return 1;
    }
    else if (num1.y==num2.y) {
        if (num1.x>num2.x) {
            return 1;
        }
        else if (num1.x<num2.x) {
            return -1;
        }
    }
    return 0;
}