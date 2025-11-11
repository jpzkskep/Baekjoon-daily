#include <stdio.h>

int main(void) {
    
    int t;
    long long dp[41];
    int n;
    
    dp[1]=2;
    dp[2]=3;
    
    for (int i=3; i<=40; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    scanf("%d",&t);
    
    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        printf("Scenario %d:\n",i+1);
        printf("%lld\n\n",dp[n]);
    }
    
    return 0;
}