#include <stdio.h>

int main(void) {
    double a,b;
    while (1) {
        scanf("%lf %lf",&a,&b);
        if (a==0 && b==0) {
            printf("AXIS");
            return 0;
        }
        if (a==0 || b==0) {
            printf("AXIS\n");
        }
        else if (a>0 && b>0) {
            printf("Q1\n");
        }
        else if (a<0 && b>0) {
            printf("Q2\n");
        }
        else if (a<0 && b<0) {
            printf("Q3\n");
        }
        else {
            printf("Q4\n");
        }
    }
    return 0;
}