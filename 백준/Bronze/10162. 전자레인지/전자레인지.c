#include <stdio.h>

int main(void) {
    int t;
    int a=300,b=60,c=10;
    int ac=0,bc=0,cc=0;
    scanf("%d",&t);
    if (t%10!=0) {
        printf("-1");
        return 0;
    }
    if (t>=a) {
        ac=ac+t/a;
        t=t%a;
    }
    if (t>=b) {
        bc=bc+t/b;
        t=t%b;
    }
    if (t>=c) {
        cc=cc+t/c;
        t=t%c;
    }
    printf("%d %d %d",ac,bc,cc);
    return 0;
}