#include <stdio.h>
int main(void) {
    int num[250000];
    int n;
    int count;
    for (int i=2; i<=250000; i++) {
        num[i]=1;    //0이면 소수 아님 1이면 소수
    }
    for (int i=2; i<=250000; i++) {
        for (int j=2*i; j<=250000; j+=i) {
            num[j]=0;
        }
    }
    num[1]=0;
    
    while (1) {
        count=0;
        scanf("%d",&n);
        if (n==0) break;
        for (int i=n+1; i<=2*n; i++) {
            if (num[i]==1) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}