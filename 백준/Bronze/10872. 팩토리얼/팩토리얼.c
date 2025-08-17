#include <stdio.h>
int main(void) {
    long long n;
    long long result=1;
    scanf("%lld",&n);
    for (int i=n; i>=1; i--) {
        result*=i;
    }
    printf("%lld",result);
    return 0;
}