#include <stdio.h>

int dp[1025][1025];
int num[1025][1025];

int main(void) {
    int n,m;
    int x1,x2,y1,y2;
    int result=0;
    scanf("%d %d",&n,&m);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            scanf("%d",&num[i][j]);
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+num[i][j];
        }
    }
    for (int i=0; i<m; i++) {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        result=dp[x2][y2]-dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1];
        printf("%d\n",result);
    }
    return 0;
}