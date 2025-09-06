#include <stdio.h>
int main(void) {
    int n,k;    //n:물품수    k:버틸수있는 무게
    int w[101]={0},v[101]={0};    //w:무게    v:가치
    int dp[101][100001]={0};    //최대가치
    scanf("%d %d",&n,&k);
    for (int i=1; i<=n; i++) {
        scanf("%d %d",&w[i],&v[i]);
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=k; j++) {
            if (w[i]>j) {    //무게를 초과할때
                dp[i][j]=dp[i-1][j];
            }
            else {    //무게를 초과하지 않을때
                if (dp[i-1][j]>v[i]+dp[i-1][j-w[i]]) {    //가치가 더 적을때
                    dp[i][j]=dp[i-1][j];
                }
                else {    //가치가 더 클때
                    dp[i][j]=v[i]+dp[i-1][j-w[i]];
                }
            }
        }
    }
    printf("%d",dp[n][k]);
    return 0;
}