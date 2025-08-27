#include <stdio.h>
int main(void) {
    int num[500001];
    int k;
    int count=0;
    int NUM;
    scanf("%d",&k);
    
    for (int i=2; i<=500000; i++) {
        num[i]=1;
    }
    for (int i=2; i<=500000; i++) {
        for (int j=2*i; j<=500000; j+=i) {
            num[j]=0;
        }
    }
    for (int i=2; i<=500000; i++) {
        if (num[i]==1) {
            count++;
            NUM=i;
            if (count==k) break;
        }
    }
    printf("%d",NUM);
    return 0;
}