#include <stdio.h>
#include <string.h>
int main(void) {
    int len,is_pal;
    char s[100000];
    for (;;) {
        is_pal=0;
        len=0;
        scanf("%s",s);
        if (strcmp(s,"0")==0) {
            return 0;
        }
        for (int i=0; s[i]!='\0'; i++) {
            len++;
        }
        for (int i=0; i<len/2; i++) {
            if (s[i]==s[len-1-i]) {
                is_pal=1;
            }
            else {
                is_pal=0;
                break;
            }
        }
        if (is_pal==1 || len==1) {
            printf("yes\n");
        }
        else if (is_pal==0) {
            printf("no\n");
        }
    }
    return 0;
}