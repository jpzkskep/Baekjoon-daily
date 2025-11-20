#include <stdio.h>

int main(void) {
    int n,m;
    
    scanf("%d %d",&n,&m);
    
    if (100*n>=m) printf("Yes");
    else printf("No");
    return 0;
}