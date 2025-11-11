#include <stdio.h>

int main(void) {
    
    int n;
    long long dp[1000001];
    int repeat_count=1;
    int second_count=2;
    
    dp[2]=1;
    dp[3]=7;
    dp[4]=4;
    
    scanf("%d",&n);
    
    for (int i=5; i<=n; i++) {
        
        if (repeat_count==1) {
            repeat_count++;
            dp[i]=dp[i-2]+1;
        }
        else if (repeat_count==2) {
            repeat_count++;
            dp[i]=dp[3]*second_count;
            second_count++;
            
        }
        else {
            repeat_count=1;
            dp[i]=dp[i-3]+7;
        }
    }
    printf("%lld",dp[n]);
    return 0;
}