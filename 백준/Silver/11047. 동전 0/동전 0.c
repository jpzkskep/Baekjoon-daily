#include <stdio.h>
int main(void) {
    int n,k;
    int coin[10];
    int many[10]={0};
    int total=0;
    scanf("%d %d",&n,&k);
    for (int i=n-1; i>=0; i--) {
        scanf("%d",&coin[i]);
    }
    while (k>=0) {
        if (k==0) break;
        for (int i=0; i<n; i++) {
            if (coin[i]>k) many[i]=0;
            else {
                many[i]=k/coin[i];
                k=k%coin[i];
            }
        }
    }
    for (int i=0; i<n; i++) {
        total+=many[i];
    }
    printf("%d",total);
    return 0;
}