#include <stdio.h>

long long dp[1001];

int main(void) {
    int w;
    scanf("%d",&w);
    if (w%2==1) {
        printf("0");
        return 0;
    }
    dp[0]=1;
    dp[1]=1;
    dp[2]=3;
    for (int i=4; i<=w; i+=2) {
        dp[i]=(3*dp[i-2])%1000000007;
        for (int j=i-4; j>=0; j-=2) {
            dp[i]+=(2*dp[j])%1000000007;
        }
    }
    printf("%lld",dp[w]%1000000007);
    return 0;
}