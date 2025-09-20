#include <stdio.h>

int num[100001];
int dp[100001];

int main(void) {
    int n,m;
    int first,second;
    int result;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&num[i]);
    }
    dp[1]=num[1];
    for (int i=2; i<=n; i++) {
        dp[i]=dp[i-1]+num[i];
    }
    scanf("%d",&m);
    for (int i=1; i<=m; i++) {
        scanf("%d %d",&first,&second);
        result=dp[second]-dp[first-1];
        printf("%d\n",result);
    }
    return 0;
}
