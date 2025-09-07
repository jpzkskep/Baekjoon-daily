#include <stdio.h>

long long dpA[46];
long long dpB[46];

int main(void) {
    int k;
    dpA[1]=0,dpB[1]=1;
    dpA[2]=1,dpB[2]=1;
    dpA[3]=1,dpB[3]=2;
    for (int i=4; i<=45; i++) {
        dpA[i]=dpB[i-1];
        dpB[i]=dpB[i-1]+dpB[i-2];;
    }
    scanf("%d",&k);
    printf("%lld %lld",dpA[k],dpB[k]);
    return 0;
}