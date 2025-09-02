#include <stdio.h>
int main(void) {
    int idx=0;
    int len=0;
    char input[10001];
    int is_first=1;
    scanf("%s",input);
    while (input[idx]!=0) {
        len++;
        idx++;
    }
    for (int i=0; i<len; i++) {
        if (is_first) {
            printf("%c",input[i]);
            is_first=0;
            continue;
        }
        if (i%10==0) {
            printf("\n");
        }
        printf("%c",input[i]);
    }
    return 0;
}