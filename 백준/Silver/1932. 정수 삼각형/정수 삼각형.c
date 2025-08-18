#include <stdio.h>
int main(void) {
    int n;
    int num[501][501];
    int maxsum=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            scanf("%d",&num[i][j]);
        }
    }
    maxsum=num[0][0];
    for (int i=1; i<n; i++) {
        for (int j=0; j<=i; j++) {
            if (j==0) {    //맨 왼쪽
                num[i][j]=num[i][j]+num[i-1][0];
            }
            else if (j==i) {    //맨 오른쪽
                num[i][j]=num[i][j]+num[i-1][j-1];
            }
            else {    //중간
                if (num[i-1][j]<num[i-1][j-1]) {
                    num[i][j]=num[i][j]+num[i-1][j-1];
                }
                else {
                    num[i][j]=num[i][j]+num[i-1][j];
                }
            }
        }
    }
    for (int i=0; i<n; i++) {
        if (num[n-1][i]>maxsum) maxsum=num[n-1][i];
    }
    printf("%d",maxsum);
    return 0;
}