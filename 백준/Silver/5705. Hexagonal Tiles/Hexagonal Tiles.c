#include <stdio.h>

int main(void) {
    
    long long dp[41];
    int n;
    
    dp[1]=1;
    dp[2]=2;
    
    for (int i=3; i<=40; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    while(1) {
        scanf("%d",&n);
        if (n==0) break;
        printf("%lld\n",dp[n]);
    }
    return 0;
}