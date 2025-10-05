#include <stdio.h>

int main(void) {
    long long f[46];
    int num;
    int n;
    
    f[0]=1;
    f[1]=1;
    for (int i=2; i<=45; i++) {
        f[i]=f[i-1]+f[i-2];
    }
    scanf("%d",&num);
    for (int i=0; i<num; i++) {
        scanf("%d",&n);
        printf("%lld\n",f[n]);
    }
    return 0;
}