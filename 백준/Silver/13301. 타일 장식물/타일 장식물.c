#include <stdio.h>

long long dp[81];

int main(void) {
    int n;
    
    dp[1]=4;
    dp[2]=6;
    for (int i=3; i<81; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    scanf("%d",&n);
    printf("%lld",dp[n]);
    return 0;
}