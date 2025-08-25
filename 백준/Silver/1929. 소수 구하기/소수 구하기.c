#include <stdio.h>
int num[1000001];    //1이면 소수 0이면 소수아님
int main(void) {
    int start,end;
    scanf("%d %d",&start,&end);
    for (int i=1; i<=1000000; i++) {
        num[i]=1;
    }
    for (int i=2; i<=1000000; i++) {
        if (num[i]==0) continue;
        for (int j=i*2; j<=1000000; j=j+i) {
            num[j]=0;
        }
    }
    for (int i=start; i<=end; i++) {
        if (i==1) continue;
        if (num[i]==1) {
            printf("%d\n",i);
        }
    }
    return 0;
}