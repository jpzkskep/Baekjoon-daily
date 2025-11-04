#include <stdio.h>

int main(void) {
    
    int n;
    long long dp[21];
    
    scanf("%d",&n);
    
    //초기값
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    dp[4]=7;
    
    for (int i=5; i<=n; i++) {
        if (i%2==0) {
            dp[i]=dp[i-1]*2-(dp[i-4]+dp[i-5]);
        }
        else {
            dp[i]=dp[i-1]*2;
        }
    }
    printf("%lld",dp[n]);
    return 0;
}