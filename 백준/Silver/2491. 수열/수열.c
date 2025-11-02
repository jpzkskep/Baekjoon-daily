#include <stdio.h>

int main(void) {
    
    int n;
    int num[1000001];
    int count_a=1;
    int count_d=1;
    int count=1;
    
    scanf("%d",&n);
    
    for (int i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    
    for (int i=0; i<n-1; i++) {
        int j=i+1;
        if (num[i]<num[j]) {
            count_a++;
            if (count_a>count) count=count_a;
            count_d=1;
        }
        else if (num[i]>num[j]) {
            count_d++;
            if (count_d>count) count=count_d;
            count_a=1;
        }
        else if (num[i]==num[j]) {
            count_a++;
            count_d++;
            if (count_a>count) count=count_a;
            if (count_d>count) count=count_d;
        }
    }
    printf("%d",count);
    return 0;
}