#include <stdio.h>
int main(void) {
    int t;
    int n;
    long long dp[101]={0};
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    dp[5]=2;
    dp[6]=3;
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        for (int j=6; j<=n; j++) {
            dp[j]=dp[j-3]+dp[j-4]+dp[j-5];
        }
        printf("%lld\n",dp[n]);
    }
    return 0;
}