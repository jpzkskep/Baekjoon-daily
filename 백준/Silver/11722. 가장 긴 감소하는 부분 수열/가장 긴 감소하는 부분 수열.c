#include <stdio.h>
int main(void) {
    int n;
    int input[1001];
    long long dp[1001]={1};
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&input[i]);
    }
    for (int i=2; i<=n; i++) {    //j는 i이전 
        for (int j=1; j<i; j++) {
            if (input[i]<input[j] && dp[i]<dp[j]+1) {
                dp[i]=dp[j]+1;
            }
        }
    }
    long long max=dp[1];
    for (int i=2; i<=n; i++) {
        if (dp[i]>max) {
            max=dp[i];
        }
    }
    printf("%lld",max+1);
    return 0;
}