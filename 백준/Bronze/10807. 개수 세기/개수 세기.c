#include <stdio.h>
int main(void) {
    int n,count=0,v;
    int number[100];
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d ",&number[i]);
    }
    scanf("%d",&v);
    for (int i=0; i<n; i++) {
        if (number[i]==v) count++;
    }
    printf("%d",count);
    return 0;
}