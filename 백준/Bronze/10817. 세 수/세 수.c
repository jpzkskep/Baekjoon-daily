#include <stdio.h>
#include <stdlib.h>

int compare(const void*a,const void*b);

int main(void) {
    int num[3];
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    qsort(num,3,sizeof(int),compare);
    printf("%d",num[1]);
    return 0;
}

int compare(const void*a,const void*b) {
    int num1=*(int*)a;
    int num2=*(int*)b;
    if (num1>num2) {
        return 1;
    }
    else {
        return -1;
    }
    return 0;;
}