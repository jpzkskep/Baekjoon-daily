#include <stdio.h>

int main(void) {
    
    long long dp[1000001]={0};
    int n;
    
    //초기값
    dp[1]=1;
    dp[2]=2;
    
    scanf("%d",&n);
    
    for (int i=3; i<=n; i++) {
        dp[i]=(dp[i-1]+dp[i-2])%15746;                                         
    }
    
    printf("%lld",dp[n]);
    return 0;
}