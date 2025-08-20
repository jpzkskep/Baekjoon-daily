#include <stdio.h>
int main(void) {
    int n;
    int dp[1001];    // 1은 상근이김 0은 창영이김
    scanf("%d",&n);
    dp[1]=0;
    dp[2]=1;
    dp[3]=0;
    dp[4]=1;
    dp[5]=1;
    for (int i=6; i<=n; i++) {
        dp[i]=0;    //항상 창영이 이긴다고 가정
        if (dp[i-1]==1 && (dp[i-3]!=1 || dp[i-4]!=1) ) {
            dp[i]=1;
        }
        if (dp[i-3]==1 && (dp[i-1]!=1 || dp[i-4]!=1) ) {
            dp[i]=1;
        }
        if (dp[i-4]==1 && (dp[i-1]!=1 || dp[i-3]!=1) ) {
            dp[i]=1;
        }
    }
    if (dp[n]) printf("SK");
    else printf("CY");
    return 0;
}