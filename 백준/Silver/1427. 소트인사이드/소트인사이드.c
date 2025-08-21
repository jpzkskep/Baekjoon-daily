#include <stdio.h>
int main(void) {
    int n;
    int num[101];
    int idx=0;
    int temp;
    scanf("%d",&n);
    if (n==0) {
        printf("0");
        return 0;
    }
    while (n>0) {
        num[idx]=n%10;
        idx++;
        n/=10;
    }
    for (int i=0; i<idx; i++) {
        for (int j=i+1; j<idx; j++) {
            if (num[j]>num[i]) {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for (int i=0; i<idx; i++) {
        printf("%d",num[i]);
    }
    return 0;
}