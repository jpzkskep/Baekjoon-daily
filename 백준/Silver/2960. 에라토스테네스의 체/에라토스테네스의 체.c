#include <stdio.h>
int main(void) {
    int n,k;
    int count=0;    //지워진 수의 개수
    int num[1001];    // 1이면 소수, 0이면 소수아님
    for (int i=1; i<=1000; i++) {
        num[i]=1;    //모두 소수라고 가정
    }
    scanf("%d %d",&n,&k);
    for (int i=2; i<=n; i++) {
        for (int j=i; j<=n; j+=i) {
            if (num[j]==0) continue;
            num[j]=0;
            count++;
            if (count==k) {
                printf("%d",j);
                break;
            }
        }
        if (count==k) break;
    }
    return 0;
}