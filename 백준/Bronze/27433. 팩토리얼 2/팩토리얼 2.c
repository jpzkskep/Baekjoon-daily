#include <stdio.h>

long long factorial(long long n);

int main(void) {
    long long n;
    scanf("%lld",&n);
    printf("%lld",factorial(n));
    return 0;
}

long long factorial(long long n) {
    if (n==0) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}