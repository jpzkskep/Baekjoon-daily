#include <stdio.h>
int main(void) {
    int n,number[1000000],max,min;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&number[i]);
    }
    max=number[0];
    min=number[0];
    for (int i=0; i<n; i++) {
        if (number[i]>max) max=number[i];
        if (number[i]<min) min=number[i];
    }
    printf("%d %d",min,max);
    return 0;
}