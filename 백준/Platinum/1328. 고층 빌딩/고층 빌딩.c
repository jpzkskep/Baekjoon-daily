#include <stdio.h>

#define MOD 1000000007

long long dp[101][101][101];

int main(void) {
    
    int n,l,r;
    int minus;
    
    scanf("%d %d %d",&n,&l,&r);
    
    dp[1][1][1]=1;
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=l; j++) {
            for (int k=1; k<=r; k++) {
                if (i==1 && j==1 && k==1) continue;
                minus=i-2;
                if (minus<0) minus=0;
                dp[i][j][k]=(dp[i-1][j-1][k]+dp[i-1][j][k-1]+dp[i-1][j][k]*minus)%MOD;
                
            }
        }
    }
    
    printf("%lld",dp[n][l][r]);
    return 0;
}