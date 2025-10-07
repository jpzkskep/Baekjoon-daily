#include <stdio.h>

int main(void) {
    int t,n;    //테스트 테이스 개수,동전의 가지수
    int coin[21];    //동전의 가치 
    int mnum;    //만들어야 되는 수
    int dp[10001];    //모든 방법의 수
    
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        
        for (int j=0; j<10002; j++) {
            dp[j]=0;
        }
        dp[0]=1;    //0원도 1가지의 경우
        
        scanf("%d",&n);
        
        for (int j=0; j<n; j++) {
            scanf("%d",&coin[j]);
        }
        
        scanf("%d",&mnum);
        
        for (int j=0; j<n; j++) {
            int curi=coin[j];    //현재 코인 가치
            for (int k=curi; k<=mnum; k++) {
                dp[k]=dp[k]+dp[k-curi];
            }
        }
        printf("%d\n",dp[mnum]);
    }
    return 0;
}