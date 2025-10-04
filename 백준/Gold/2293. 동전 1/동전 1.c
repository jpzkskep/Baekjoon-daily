#include <stdio.h>

int main(void) {
    int n,k;
    int coin[101]={0};
    int dp[100001]={0};
    scanf("%d %d",&n,&k);
    for (int i=0; i<n; i++) {
        scanf("%d",&coin[i]);    //i+1가지 종류의 코인
    }
    dp[0]=1;    //0원도 1가지의 경우
    for (int i=0; i<n; i++) {
        int curi=coin[i];    //현재 코인
        for (int j=curi; j<=k; j++) {
            dp[j]=dp[j]+dp[j-curi];
        }
    }
    printf("%d",dp[k]);
    return 0;
}