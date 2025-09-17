#include <stdio.h>

int dp[31][31];

int main(void) {
    int n,k;
    scanf("%d %d",&n,&k);
    for (int i=1; i<=30; i++) {
        dp[i][1]=1;
        dp[i][i]=1;
    }
    for (int i=3; i<=30; i++) {
        for (int j=2; j<=i-1; j++) {
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    printf("%d",dp[n][k]);
    return 0;
}