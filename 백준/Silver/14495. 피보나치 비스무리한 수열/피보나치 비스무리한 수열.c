#include <stdio.h>
int main(void) {
    int n;
    long long dp[117]={0};
    scanf("%d",&n);
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    for (int i=4; i<=n; i++) {
        dp[i]=dp[i-1]+dp[i-3];
    }
    printf("%lld",dp[n]);
    return 0;
}