#include <stdio.h>
int main(void) {
    int num[10][10];
    int max;
    int x=1;
    int y=1;
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=9; j++) {
            scanf("%d",&num[i][j]);
        }
    }
    max=num[1][1];
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=9; j++) {
            if (num[i][j]>max) {
                max=num[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("%d\n",max);
    printf("%d %d",x,y);
    return 0;
}