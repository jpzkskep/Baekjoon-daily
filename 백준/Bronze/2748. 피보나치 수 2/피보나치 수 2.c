#include <stdio.h>
int main(void) {
    int n;
    long long fibo[90]={0};
    scanf("%d",&n);
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2; i<=n; i++) {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    printf("%lld",fibo[n]);
    return 0;
}