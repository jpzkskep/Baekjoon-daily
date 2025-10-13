#include <stdio.h>
int main(void) {
    int a,b;
    int t,ans;
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d %d",&a,&b);
        ans=b-a+2;
        printf("%d\n",ans);
    }
    return 0;
}