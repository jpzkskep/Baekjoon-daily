#include <stdio.h>
int main(void) {
    int dp[1000001]={0};
    int n,i=2;
    dp[1]=0;
    scanf("%d",&n);
    for (i=2; i<=n; i++) {
        dp[i]=dp[i-1]+1;
        if (i%3==0 && dp[i/3]<dp[i]) {
            dp[i]=dp[i/3]+1;
        }
        if (i%2==0 && dp[i/2]<dp[i]) {
            dp[i]=dp[i/2]+1;
        }
    }
    printf("%d",dp[n]);
    return 0;
}