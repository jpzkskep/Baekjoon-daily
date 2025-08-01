#include <stdio.h>
int main(void) {
    int n,count=1,sum=0;
    scanf("%d",&n);
    while (count<=n) {
        sum+=count;
        count++;
    }
    printf("%d",sum);
    return 0;
}