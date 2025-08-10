#include <stdio.h>
void is_pal(char *input,int len);
int main(void) {
    char input[101];
    int len=0;
    scanf("%s",input);
    for (int i=0; input[i]!='\0'; i++) {
        len++;
    }
    is_pal(input,len);
    return 0;
}
void is_pal(char *input,int len) {
    int p=0;
    if (len==1) {
        printf("1");
        return;
    }
    for (int i=0; i<len/2; i++) {
        if (*(input+i)==*(input+len-1-i)) {
            p=1;
        }
        else {
            printf("0");
            return;
        }
    }
    if (p==1) {
        printf("1");
        return;
    }
}