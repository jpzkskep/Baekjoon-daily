#include <stdio.h>
int main(void) {
    int student[31]={0},check[31]={0};
    for (int i=1; i<=28; i++) {
        scanf("%d",&student[i]);
        check[student[i]]=1;
    }
    for (int i=1; i<=30; i++) {
        if (check[i]!=1) printf("%d\n",i);
    }
    return 0;
}