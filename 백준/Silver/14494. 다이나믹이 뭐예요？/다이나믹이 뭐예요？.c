#include <stdio.h>
int main(void) {
    long long dp[1001][1001]={0};
    int n,m;
    dp[1][1]=1;       
    scanf("%d %d",&n,&m);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (i==1 && j==1) {
                continue;
            }
            dp[i][j]=(dp[i-1][j]+dp[i][j-1]+dp[i-1][j-1])%1000000007;
            
        }
    }
    printf("%lld",dp[n][m]);
    return 0;
}