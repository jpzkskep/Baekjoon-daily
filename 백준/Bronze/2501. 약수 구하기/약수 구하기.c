#include <stdio.h>
int main(void) {
    int num;
    int where;
    int divide[10001]={0};
    int idx=0,len=0;
    int temp;
    scanf("%d %d",&num,&where);
    for (int i=1; i<=num; i++) {
        if (num%i==0) {
            divide[idx]=i;
            idx++;
        }
    }
    for (int i=0; divide[i]!=0; i++) {
        len++;
    }
    printf("%d",divide[where-1]);
    return 0;
}