#include <stdio.h>

int max(int num1,int num2);

int main(void) {
    int n;
    int score[301];
    int dp[301]={0};
    
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&score[i]);
    }
    dp[1]=score[1];
    dp[2]=dp[1]+score[2];
    for (int i=3; i<=n; i++) {
        dp[i]=max(dp[i-2]+score[i],dp[i-3]+score[i-1]+score[i]);
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