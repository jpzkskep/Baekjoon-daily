#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b);

int main(void) {
    int n;
    int card[500001];
    int m;
    int num;
    int have=0;
    
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&card[i]);
    }
    qsort(card,n,sizeof(int),compare);
    scanf("%d",&m);
    for (int i=0; i<m; i++) {
        have=0;
        scanf("%d",&num);
        int first=0;
        int end=n-1;
        while (first<=end) {
            int mid=(first+end)/2;
            if (card[mid]==num) {
                have=1;
                break;
            }
            else {
                if (card[mid]>num) {
                    end=mid-1;
                }
                else {
                    first=mid+1;
                }
            }
        }
        printf("%d ",have);
    }
    return 0;
}

int compare(const void *a,const void *b) {
    int num1=*(int*)a;
    int num2=*(int*)b;
    if (num1>num2) {
        return 1;
    }
    else if (num1<num2) {
        return -1;
    }
    return 0;
}