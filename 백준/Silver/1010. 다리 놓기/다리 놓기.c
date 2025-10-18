#include <stdio.h>

int main(void) {
    int t;
    int num1,num2;
    int dp[31][31]={0};
    
    for (int i=1; i<30; i++) {
        dp[1][i]=i;
    }
    
    for (int i=2; i<30; i++) {
        for (int j=i; j<30; j++) {
            dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
        }
    }
    
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d %d",&num1,&num2);
        printf("%d\n",dp[num1][num2]);
    }
    return 0;
}