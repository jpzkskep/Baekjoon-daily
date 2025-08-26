#include <stdio.h>

int main(void) {
    int num[1000001]={0};    //1이면 소수 0이면 소수 아님
    int input;
    int j;
    int max_count=1;
    for (int i=1; i<=1000000; i++) {
        num[i]=1;
    }
    num[1]=0;
    for (int i=2; i<=1000000; i++) {
        if (num[i]==0) continue;
        for (int j=2*i; j<=1000000; j+=i) {
            num[j]=0;
        }
    }
    
    while (1) {
        scanf("%d",&input);
        max_count=1;
        if (input==0) break;
        for (int i=3; i<=1000000; i++) {
            j=input-i;
            if (num[i]==1 && num[j]==1 && j>=3) {
                printf("%d = %d + %d\n",input,i,j);
                max_count=0;
                break;
            }
        }
        if (max_count) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}