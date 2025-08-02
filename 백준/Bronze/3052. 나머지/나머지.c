#include <stdio.h>
int main(void) {
    int num[10],divided[1001]={0},max,count=0;
    for (int i=0; i<10; i++) {
        scanf("%d",&num[i]);
        divided[num[i]%42]=1;
    }
    max=num[0];
    for (int i=0; i<10; i++) {
        if (num[i]>max) max=num[i];
    }
    for (int i=0; i<=max; i++) {
        if (divided[i]!=0) count++;
    }
    printf("%d",count);
    return 0;
}