#include <stdio.h>

long long dp[100001][2]={0};    //[0]:홀수개수    [1]:짝수개수

int main(void) {
    int t,n;
    dp[1][0]=1,dp[1][1]=0;
    dp[2][0]=1,dp[2][1]=1;
    dp[3][0]=2,dp[3][1]=2;
    for (int i=4; i<=100000; i++) {
        dp[i][0]=(dp[i-1][1]+dp[i-2][1]+dp[i-3][1])%1000000009;
        dp[i][1]=(dp[i-1][0]+dp[i-2][0]+dp[i-3][0])%1000000009;
    }
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        printf("%lld %lld\n",dp[n][0],dp[n][1]);
    }
    return 0;
}