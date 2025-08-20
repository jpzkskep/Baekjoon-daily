#include <stdio.h>
int main(void) {
    long long n,result;
    scanf("%lld",&n);
    result=n%2;
    if (result) printf("SK");
    else printf("CY");
    return 0;
}