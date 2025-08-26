#include <stdio.h>

int main(void) {
    int t, n;
    int num[10001];    //1이면 소수 0이면 소수 아님

    for (int i = 2; i <= 10000; i++) {
        num[i] = 1;
    }
    num[1] = 0;
    for (int i = 2; i <= 10000; i++) {
        if (num[i] == 1) {
            for (int j = 2 * i; j <= 10000; j += i) {
                num[j] = 0;
            }
        }
    }
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        for (int j=n/2; j>=2; j--) {
            if (num[j]==1 && num[n-j]==1) {
                printf("%d %d\n",j,n-j);
                break;
            }
        }
    }
    return 0;
}