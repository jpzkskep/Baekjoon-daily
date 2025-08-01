#include <stdio.h>
int main(void) {
    int t;
    int a[100],b[100];
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d %d\n",&a[i],&b[i]);
        printf("%d\n",a[i]+b[i]);
    }
    return 0;
}