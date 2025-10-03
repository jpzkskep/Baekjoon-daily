#include <stdio.h>
#define PI 3.14159265358979

int main(void) {
    double r;
    scanf("%lf",&r);
    printf("%.6f\n",PI*r*r);    //유클리드
    printf("%.6f",2*r*r);    //택시
    return 0;
}