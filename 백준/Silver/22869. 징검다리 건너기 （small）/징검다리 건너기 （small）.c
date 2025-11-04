#include <stdio.h>

int main(void) {
    
    int n,k;
    int num[5001];
    int dp[5001];
    int abso;
    long long power;
    
    scanf("%d %d",&n,&k);
    
    for (int i=0; i<n; i++) {
        scanf("%d",&num[i]);
        dp[i]=0;
    }
    
    dp[0]=1;    //첫번째 값은 항상도달
    
    for (int i=0; i<n-1; i++) {
        if (dp[i]==0) continue;    //다음상태로 못넘어감
        for (int j=i+1; j<n; j++){
            abso=num[i]-num[j];
            if (abso<0) abso=-abso;
            power=(j-i)*(1+abso);
            if (power<=k) dp[j]=1;
        }
    }
    if (dp[n-1]==0) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}