#include <stdio.h>

long long dp [10000000];

int main(void) {
    
    int n;
    scanf("%d",&n);
    
    dp[1]=1;    //악수를 안하는경우도 1개의 경우
    dp[2]=2;
    dp[3]=3;
    
    for (int i=4; i<=n; i++) {
        dp[i]=(dp[i-1]+dp[i-2])%10;
    }
    
    printf("%lld",dp[n]);
    
    return 0;
}