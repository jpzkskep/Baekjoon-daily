#include <stdio.h>
#include <stdlib.h>

int compare(const void*a,const void*b);

typedef struct {
    int start;
    int end;
} Meeting;

int main(void) {
    Meeting meeting[100001];
    int n;
    int count=0;
    int meet_start=0;
    int meet_end=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&meeting[i].start,&meeting[i].end);
    }
    qsort(meeting,n,sizeof(Meeting),compare);
    for (int i=0; i<n; i++) {
        if (meeting[i].start>=meet_end) {
            count++;
            meet_end=meeting[i].end;
        }
    }
    printf("%d",count);
    return 0;
}

int compare(const void*a,const void*b) {
    Meeting meet1=*(Meeting*)a;
    Meeting meet2=*(Meeting*)b;
    if (meet1.end>meet2.end) {
        return 1;
    }
    else if (meet1.end<meet2.end) {
        return -1;
    }
    else {
        if (meet1.start>meet2.start) {
            return 1;
        }
        else if (meet1.start<meet2.start) {
            return -1;
        }
        else {
            return 0;
        }
    }
    return 0;
}