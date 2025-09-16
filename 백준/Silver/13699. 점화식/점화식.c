#include <stdio.h>

long long dp[36];

int main(void) {
    int n;
    int start,end,idx=0;
    long long sum=0;
    
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for (int i=3; i<=35; i++) {
        end=i;
        start=0;
        idx=0;
        sum=0;
        while (idx!=i) {
            sum=sum+dp[start+idx]*dp[end-idx-1];
            idx++;
        }
        dp[i]=sum;
    }
    
    scanf("%d",&n);
    printf("%lld",dp[n]);
    return 0;
}