#include <stdio.h>
int main(void) {
    int n;
    int count=0;
    scanf("%d",&n);
    while (n>=5) {
        count+=n/5;
        n/=5; 
    }
    printf("%d",count);
    return 0;
}