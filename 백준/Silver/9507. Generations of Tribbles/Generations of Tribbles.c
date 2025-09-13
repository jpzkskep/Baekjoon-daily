#include <stdio.h>

long long koong[68];

int main(void) {
    int t,n;
    
    koong[0]=1;
    koong[1]=1;
    koong[2]=2;
    koong[3]=4;
    for (int i=4; i<68; i++) {
        koong[i]=koong[i-1]+koong[i-2]+koong[i-3]+koong[i-4];
    }
    
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        printf("%lld\n",koong[n]);
    }
    return 0;
}