#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for (int i=n; n>0; n--) {
        for (int j=0; j<n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}