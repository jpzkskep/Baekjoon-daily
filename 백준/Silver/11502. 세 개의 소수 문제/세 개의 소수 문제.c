#include <stdio.h>
int main(void) {
    int t,k;
    int num[1001];
    int prime[1001];
    int idx=0;
    int found=0;
    
    for (int i=2; i<=1000; i++) {
        num[i]=1;    //1이면 소수 0이면 소수 아님
    }
    for (int i=2; i<=1000; i++) {
        if (num[i]==0) continue;
        for (int j=i*2; j<=1000; j+=i) {
            num[j]=0;
        }
    }
    for (int i=2; i<=1000; i++) {
        if (num[i]==1) {
            prime[idx]=i;
            idx++;
        }
    }
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        found=0;
        scanf("%d",&k);
        for (int j=0; j<idx; j++) {
            for (int a=j; a<idx; a++) {
                for (int b=a; b<idx; b++) {
                    if (prime[j]+prime[a]+prime[b]==k) {
                        found=1;
                        printf("%d %d %d\n",prime[j],prime[a],prime[b]);
                        break;
                    }
                    if (found==1) break;
                }
                if (found==1) break;
            }
            if (found==1) break;
        }
        if (found==0) printf("0\n");
    }
    return 0;
}