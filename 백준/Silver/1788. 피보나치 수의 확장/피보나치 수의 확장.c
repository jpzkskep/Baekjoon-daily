#include <stdio.h>

long long fibo[2000001];

int main(void) {
    int n;
    int mp=0;
    scanf("%d",&n);
    int upcount=n+1000000;
    int prn;
    
    fibo[1000000]=0;
    fibo[1000001]=1;
    if (n>0) {
        for (int i=1000002; i<=upcount; i++) {
            fibo[i]=(fibo[i-1]+fibo[i-2])%1000000000;
        }
    }
    else if (n<0) {
        for (int i=999999; i>=upcount; i--) {
            fibo[i]=(fibo[i+2]-fibo[i+1])%1000000000;
        }
    }
    if (fibo[upcount]>0) mp=1;
    else if (fibo[upcount]<0) mp=-1;
    if (fibo[upcount]<0) {
        fibo[upcount]=-fibo[upcount];
    }
    printf("%d\n",mp);
    printf("%lld",fibo[upcount]);
    return 0;
}