#include <stdio.h>
int main(void) {
    int dp[31]={0};
    int n;
    dp[0]=1;
    scanf("%d",&n);
    if (n%2==1) {
        printf("0");
        return 0;
    }
    dp[2]=3;
    for (int i=4; i<=n; i+=2) {
        dp[i]=3*dp[i-2];
        for (int j=i-4; j>=0; j-=2) {
            dp[i]+=dp[j]*2;
        }
    }
    printf("%d",dp[n]);
    return 0;
}