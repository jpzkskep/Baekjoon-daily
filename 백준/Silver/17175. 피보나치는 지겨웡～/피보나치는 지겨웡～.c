#include <stdio.h>

long long dp[51];

int main(void) {
    int n;
    
    dp[0]=1;
    dp[1]=1;
    dp[2]=3;
    dp[3]=5;
    for (int i=4; i<51; i++) {
        dp[i]=(dp[i-1]+dp[i-2]+1)%1000000007;
    }
    
    scanf("%d",&n);
    printf("%lld",dp[n]);
    return 0;
}