#include <stdio.h>
int main (void) {
    int n,m;
    int num;
    long long result;
    long long arr[100001]={0};
    int first,end;
    scanf("%d %d",&n,&m);
    for (int i=1; i<=n; i++) {
        scanf("%d",&num);
        arr[i]=arr[i-1]+num;
    }
    for (int i=0; i<m; i++) {
        scanf("%d %d",&first,&end);
        result=arr[end]-arr[first-1];
        printf("%lld\n",result);
    }
    return 0;
}