#include <stdio.h>
int main(void) {
    int t,p,q;
    scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        scanf("%d %d",&p,&q);
        long long fibo[10001];
        fibo[1]=1%q;
        fibo[2]=1%q;
        for (int j=3; j<=p; j++) {
            fibo[j]=(fibo[j-1]+fibo[j-2])%q;
        }
        printf("Case #%d: %lld\n",i,fibo[p]);
    }
    return 0;
}