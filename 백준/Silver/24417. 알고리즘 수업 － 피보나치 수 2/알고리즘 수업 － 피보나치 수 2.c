#include <stdio.h>
#define MOD 1000000007

int main(void) {
    
    int n;
    int first=1;
    int last=1;
    int answer;
    
    scanf("%d",&n);
    
    int count_dp=(n-2)%MOD;
    
    for (int i=3; i<=n; i++) {
        answer=(first+last)%MOD;
        int temp=first;
        first=answer;
        last=temp;
    }
    
    printf("%d %d",answer,(n-2)%MOD);
    return 0;
}