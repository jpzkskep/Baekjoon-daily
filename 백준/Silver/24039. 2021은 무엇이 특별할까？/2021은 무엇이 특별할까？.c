#include <stdio.h>
int main(void) {
    int input;
    int num[15001]={0};
    int prime[2000]={0};
    int idx=0;
    int mul;
    for (int i=2; i<=15000; i++) {
        num[i]=1;
    }
    num[1]=0;
    for (int i=2; i<=15000; i++) {
        if (num[i]==0) continue;
        for (int j=2*i; j<=15000; j+=i) {
            num[j]=0;
        }
    }
    for (int i=2; i<=15000; i++) {
        if (num[i]==1) {
            prime[idx]=i;
            idx++;
        }
    }
    
    scanf("%d",&input);
    for (int i=0; prime[i]!=0; i++) {
        mul=prime[i]*prime[i+1];
        if (mul>input) {
            printf("%d",mul);
            break;
        }
    }
    return 0;
}