#include <stdio.h>
int main(void) {
    int n;
    int x[51],y[51];
    int rank;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&x[i],&y[i]);
    }
    for (int i=0; i<n; i++) {
        rank=1;
        for (int j=0; j<n; j++) {
            if (x[i]<x[j] && y[i]<y[j]) {
                rank++;
            }
        }
        printf("%d ",rank);
    }
    return 0;
}