#include <stdio.h>

int main(void) {
    int num[3];
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    int max=num[0];
    int else_sum;
    for (int i=0; i<3; i++) {
        if (num[i]>max) {
            max=num[i];
        }        
    }
    if (max==num[0]) {
        else_sum=num[1]+num[2];
    }
    else if (max==num[1]) {
        else_sum=num[0]+num[2];
    }
    else {
        else_sum=num[0]+num[1];
    }
    if (max>=else_sum) {
        max=else_sum-1;
        printf("%d",else_sum+max);
    }
    else {
        printf("%d",max+else_sum);
    }
    return 0;
}
