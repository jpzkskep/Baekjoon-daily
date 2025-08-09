#include <stdio.h>
int main(void) {
    char s[1000001];
    int idx=0;
    int count=0;
    int is_first=1;
    scanf(" %[^\n]",s);
    for (int i=0; s[i]!='\0'; i++) {
        if (is_first) {
            is_first=0;
            if (s[i]!=' ') {
                count++;
            }
        }
        if (i>=1) {
            if (s[i]!=' ' && s[i-1]==' ') {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}