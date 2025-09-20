#include <stdio.h>
#define PI 3.141592

int main(void) {
    double d1,d2;
    double result;
    scanf("%lf",&d1);
    scanf("%lf",&d2);
    result=2*PI*d2+2*d1;
    printf("%.6f",result);
    return 0;
}