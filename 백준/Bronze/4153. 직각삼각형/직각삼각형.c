#include <stdio.h>
int main(void) {
    long long num1,num2,num3;
    for (;;) {
        scanf("%lld %lld %lld",&num1,&num2,&num3);
        if (num1==0 && num2==0 && num3==0) break;
        if (num1>num2 && num1>num3) {
            if (num1*num1==num2*num2+num3*num3) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
        if (num2>num1 && num2>num3) {
            if (num2*num2==num1*num1+num3*num3) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
        if (num3>num1 && num3>num2) {
            if (num3*num3==num1*num1+num2*num2) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
    }
    return 0;
}