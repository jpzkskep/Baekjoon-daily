#include <stdio.h>
#define MAX 9

int n,m;
int num[MAX];
int arr[MAX];    //0이면 중복아님 1이면 중복

void find(int input);

int main(void) {
    scanf("%d %d",&n,&m);
    find(0);
    return 0;
}

void find(int input) {
    if (input==m) {
        for (int i=0; i<m; i++) {
            printf("%d ",num[i]);
        }
        printf("\n");
    }
    for (int i=1; i<=n; i++) {
        if (!arr[i]) {
            arr[i]=1;
            num[input]=i;
            find(input+1);
            arr[i]=0;
        }
    }
}