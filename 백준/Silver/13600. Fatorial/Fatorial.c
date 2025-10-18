#include <stdio.h>

int main(void) {
    int n;
    int ans=0;
    int fac[9]={0};
    fac[1]=1;
    
    for (int i=2; i<9; i++) {
        fac[i]=fac[i-1]*i;
    }
    scanf("%d",&n);
    
    for (int i=8; i>0; i--) {
        while (fac[i]<=n) {
            n-=fac[i];
            ans++;
        }
    }
    
    printf("%d",ans);
    return 0;
}