#include <stdio.h>
int main(void) {
    int t;
    int n;
    int dp[12]={0};
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for (int i=4; i<=11; i++) {
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}