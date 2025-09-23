#include <stdio.h>

int main(void) {
    long long n,m;    //나무의수:n 나무의길이:m
    int max_height=0;    //가장 높은 나무의 높이
    int tree[1000001];
    scanf("%lld %lld",&n,&m);
    for (int i=0; i<n; i++) {
        scanf("%d",&tree[i]);
        if (tree[i]>max_height) {
            max_height=tree[i];
        }
    }
    long long start=0;
    long long last=max_height;
    long long result=0;
    while (start<=last) {
        long long mid=(start+last)/2;
        long long sum=0;
        for (int i=0; i<n; i++) {
            if (tree[i]>mid) {
                sum=sum+tree[i]-mid;
            }
        }
        if (sum>=m) {
            result=mid;
            start=mid+1;
        }
        else {
            last=mid-1;
        }       
    }
    printf("%lld",result);
    return 0;
}