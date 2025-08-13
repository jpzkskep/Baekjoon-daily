#include <stdio.h>
int main(void) {
    long long n;
    long long m;
    long long big,small,result;
    scanf("%lld %lld",&n,&m);
    big=n;
    small=m;
    if (m>big) {
        big=m;
        small=n;
    }
    result=big-small;
    if (result<0) result=-result;
    printf("%lld",result);
    return 0;
}