#include <stdio.h>

int main(void) {
    int t,n;
    int num[1000001];
    int prime[100000]={0};
    int count=0;
    int prime_count=0;
    int idx=0;
    int k;
    for (int i=2; i<=1000000; i++) {
        num[i]=1;    //1이면 소수 0이면 소수가 아님
    }
    num[1]=0;
    for (int i=2; i<=1000000; i++) {
        for (int j=2*i; j<=1000000; j+=i) {
            num[j]=0;
        }
    }
    for (int i=2; i<=1000000; i++) {
        if (num[i]==1) {
            prime[idx]=i;
            idx++;
        }
    }
    for (int i=0; i<=100000; i++) {
        if (prime[i]!=0) {
            prime_count++;
        }
    }

    
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        count=0;
        for (int j=0; prime[j]<=n/2; j++) {
            k=n-prime[j];
            if (num[k]==1) {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}