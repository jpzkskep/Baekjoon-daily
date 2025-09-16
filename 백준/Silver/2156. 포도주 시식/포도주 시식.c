#include <stdio.h>

int max(int num1,int num2);

int main(void) {
    int n;
    int dp[10001]={0};
    int num[10001]={0};
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&num[i]);
    }
    dp[1]=num[1];
    dp[2]=num[1]+num[2];
    for (int i=3; i<=n; i++) {
        dp[i]=max(dp[i-1],max(dp[i-2]+num[i],dp[i-3]+num[i-1]+num[i]));
    }
    printf("%d",dp[n]);
    return 0;
}

int max(int num1,int num2) {
    if (num1>num2) {
        return num1;
    }
    else {
        return num2;
    }
    return 0;
}