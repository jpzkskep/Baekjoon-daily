#include <stdio.h>
int main(void) {
    int dp[100001]={0};
    int n;
    scanf("%d",&n);
    dp[1]=-1;
    dp[2]=1;
    dp[3]=-1;
    dp[4]=2;
    dp[5]=1;                           
    for (int i=6; i<=n; i++) {
        
        if (i%5==0) {
            dp[i]=i/5;
        }
        else {
            dp[i]=dp[i-2]+1;
        }
    }
    printf("%d",dp[n]);
    return 0;
}