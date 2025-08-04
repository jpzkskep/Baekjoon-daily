#include <stdio.h>
int main(void) {
    int n;
    long long fibo[1000001]={0};
    scanf("%d",&n);
    fibo[0]=0;
    fibo[1]=1;
    fibo[2]=1;
    for (int i=3; i<=n; i++) {
        fibo[i]=(fibo[i-1]+fibo[i-2])%1000000007;
    }
    printf("%lld",fibo[n]);
    return 0;
}