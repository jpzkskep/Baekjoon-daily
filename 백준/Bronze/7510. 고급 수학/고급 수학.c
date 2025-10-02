#include <stdio.h>

int main(void) {
    int n;
    int count=1;
    long long a,b,c;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Scenario #%d:\n",count++);
        if (a>=b && a>=c) {
            if (a*a==b*b+c*c) {
                printf("yes\n");
            }
            else {
                printf("no\n");
            }
        }
        else if (b>=a && b>=c) {
            if (b*b==a*a+c*c) {
                printf("yes\n");
            }
            else {
                printf("no\n");
            }
        }
        else if (c>=a && c>=b) {
            if (c*c==a*a+b*b) {
                printf("yes\n");
            }
            else {
                printf("no\n");
            }
        }
        printf("\n");
    }
    return 0;
}