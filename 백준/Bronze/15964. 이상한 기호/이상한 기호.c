#include <stdio.h>

int main(void) {
    
    long long a,b;
    scanf("%d %d",&a,&b);
    
    printf("%lld",(a+b)*(a-b));
    return 0;
}