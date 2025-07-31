#include <stdio.h>
int main(void) {
    int a,b,c,reward,same,big;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c) {
        reward=10000+a*1000;
        printf("%d",reward);
    }
    else if (a==b || a==c || b==c) {
        if (a==b) same=a;
        if (a==c) same=c;
        if (b==c) same=b;
        reward=1000+same*100;
        printf("%d",reward);
    }
    else if (a!=b && b!=c) {
        big=a;
        if (b>big) big=b;
        if (c>big) big=c;
        reward=big*100;
        printf("%d",reward);
    }
    return 0;
}