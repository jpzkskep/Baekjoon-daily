#include <stdio.h>

int main(void) {
    
    long long dp[46];
    int count,n;
    
    dp[1]=2;
    dp[2]=3;
    
    for (int i=3; i<=45; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    scanf("%d",&count);    
    
    for (int i=0; i<count; i++) {
        scanf("%d",&n);
        printf("Scenario #%d:\n",i+1);
        printf("%lld\n\n",dp[n]);
    }
    
    return 0;
}