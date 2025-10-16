#include <stdio.h>

int dp[1001][3]; //[][0,1,2]:빨강,초록,파랑
int num[1001][3];

int min(int num1,int num2);

int main(void) {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d %d %d",&num[i][0],&num[i][1],&num[i][2]);       
    }
    dp[0][0]=num[0][0];
    dp[0][1]=num[0][1];
    dp[0][2]=num[0][2];
    for (int i=1; i<n; i++) {
        dp[i][0]=num[i][0]+min(dp[i-1][1],dp[i-1][2]);
        dp[i][1]=num[i][1]+min(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=num[i][2]+min(dp[i-1][0],dp[i-1][1]);
    }
    printf("%d",min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]));
    return 0;
}

int min(int num1,int num2) {
    if (num1<num2) {
        return num1;
    }
    else {
        return num2;
    }
}