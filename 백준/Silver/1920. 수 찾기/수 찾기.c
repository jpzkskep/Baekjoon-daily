#include <stdio.h>
#include <stdlib.h>

int compare(const void* num1,const void* num2);
int search(int ar[],int len,int target);

int main(void) {
    int n,m;
    int num[100001]={0};
    int here[100001]={0};
    int answer;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    scanf("%d",&m);
    for (int i=0; i<m; i++) {
        scanf("%d",&here[i]);
    }
    qsort(num,n,sizeof(int),compare);
    for (int i=0; i<m; i++) {
        answer=search(num,n,here[i]);
        printf("%d\n",answer);
    }
    return 0;
}

int compare(const void* num1,const void* num2) {
    int output1=*(int*)num1;
    int output2=*(int*)num2;
    if (output1>output2) {
        return 1;
    }
    else if (output1<output2) {
        return -1;
    }
    else {
        return 0;
    }
    return 0;
}

int search(int ar[],int len,int target) {
    int first=0;
    int last=len-1;
    int mid;
    while (first<=last) {
        mid=(first+last)/2;
        if (target==ar[mid]) {
            return 1;    //있으면 1리턴
        }
        else {
            if (target<ar[mid]) {
                last=mid-1;
            }
            else {
                first=mid+1;
            }
        }
    }
    return 0;    //없으면 0리턴
}