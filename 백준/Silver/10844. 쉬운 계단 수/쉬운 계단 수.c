#include <stdio.h>
#define divides 1000000000

int main(void) {
    
    int dp[101][10];    //n자리수 끝자리수 m
    int n;
    long long sum=0;
    
    dp[1][0]=0;
    for (int i=1; i<10; i++) {
        dp[1][i]=1;
    }
    
    scanf("%d",&n);
    
    for (int i=2; i<=n; i++) {
        for (int j=0; j<10; j++) {
            if (j==0) {
                dp[i][j]=dp[i-1][1]%divides;
            }
            else if (j==9) {
                dp[i][j]=dp[i-1][8]%divides;
            }
            else {
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%divides;
            }
        }
    }
    
    for (int i=0; i<10; i++) {
        sum=(sum+dp[n][i])%divides;
    }
    
    printf("%lld",sum);
    return 0;
}