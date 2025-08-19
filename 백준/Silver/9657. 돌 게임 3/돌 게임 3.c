#include <stdio.h>
int main(void) {
    int n;
    int dp[1001];    //1이 sk 0이 cy
    scanf("%d",&n);
    dp[1]=1;
    dp[2]=0;
    dp[3]=1;
    dp[4]=1;
    for (int i=5; i<=1001; i++) {
        dp[i]=1;
        if (dp[i-1]==1) {
            if (dp[i-3]!=0 && dp[i-4]!=0) {
                dp[i]=0;
            }
        }
        if (dp[i-3]==1) {
            if (dp[i-1]!=0 && dp[i-4]!=0) {
                dp[i]=0;
            }
        }
        if (dp[i-4]==1) {
            if (dp[i-1]!=0 && dp[i-3]!=0) {
                dp[i]=0;
            }
        }
    }
    if (dp[n]) printf("SK");
    else printf("CY");
    return 0;
}