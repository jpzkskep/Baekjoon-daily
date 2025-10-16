#include <stdio.h>

int input;
int is_prime(long long input); //소수면 1반환 아니면 0

int main(void) {
    int t;
    int pr;
    long long input;
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%lld",&input);
        for (long long j=input; ; j++) {
            pr=is_prime(j);
            if (pr==0) continue;
            if (pr==1) {
                printf("%lld\n",j);
                break;
            }
        }            
    }
    return 0;
}

int is_prime(long long input) {
    if (input<2) return 0;
    for (long long i=2; i*i<=input; i++) {
        if (input%i==0) return 0;
    }
    return 1;
}