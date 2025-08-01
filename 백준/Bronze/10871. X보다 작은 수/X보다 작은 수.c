#include <stdio.h>
int main(void) {
    int n,x,number[10000];
    scanf("%d %d",&n,&x);
    for (int i=0; i<n; i++) {
        scanf("%d",&number[i]);
        if (number[i]<x) printf("%d ",number[i]);
    }
    return 0;
}