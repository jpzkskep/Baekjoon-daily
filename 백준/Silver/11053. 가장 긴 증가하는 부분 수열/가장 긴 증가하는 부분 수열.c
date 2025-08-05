#include <stdio.h>
int main(void) {
    int num[1001],dp[1001];
    int n,max=1;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&num[i]);
        dp[i]=1;
    }
    for (int i=2; i<=n; i++) {
        for (int j=1; j<i; j++) {
            if (num[j]<num[i] && dp[i]<dp[j]+1) {   
                dp[i]=dp[j]+1;
            }
        }
    }
    for (int i=2; i<=n; i++) {
        if (dp[i]>max) max=dp[i];
    }
    printf("%d",max);
    return 0;
}
