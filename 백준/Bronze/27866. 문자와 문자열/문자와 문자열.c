#include <stdio.h>
int main(void) {
    int i;
    char s[1001];
    scanf("%s",s);
    scanf("%d",&i);
    printf("%c",s[i-1]);
    return 0;
}