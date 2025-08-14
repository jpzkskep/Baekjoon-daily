#include <stdio.h>
int main(void) {
    int n;
    int count=0;
    int left;
    scanf("%d",&n);
    left=n;
    while (n>=0) {
        if (n==0) break;
        while (n%5==0) {
            while (n>0) {
                n-=5;
                left-=5;
                count++;
            }
            printf("%d",count);
            return 0;
        }
        n-=3; 
        left-=3;
        count++;
    }
    if (left!=0) {
        count=-1;
    }
    printf("%d",count);
    return 0;
}