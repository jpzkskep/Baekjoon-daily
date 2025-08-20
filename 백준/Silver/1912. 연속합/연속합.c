#include <stdio.h>
int main(void) {
    int n;    //정수 n개
    int num[100001];    //n번째 정수
    int dp[100001];    //연속합
    int max;    //합의 최대값
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    dp[0]=num[0];
    max=dp[0];
    for (int i=1; i<n; i++) {
        dp[i]=dp[i-1]+num[i];
        if (dp[i-1]+num[i]>num[i]) {
            dp[i]=dp[i-1]+num[i];
        }
        else {
            dp[i]=num[i];
        }
    }
    for (int i=1; i<n; i++) {
        if (dp[i]>max) {
            max=dp[i];
        }
    }
    printf("%d",max);
    return 0;
}