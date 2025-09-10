#include <stdio.h>
int main(void) {
    char input[101];
    int idx=0;
    scanf("%s",input);
    while (input[idx]!='\0') {
        if (input[idx]>=65 && input[idx]<=90) {
            printf("%c",input[idx]+32);
        }
        else if (input[idx]>=97 && input[idx]<=122) {
            printf("%c",input[idx]-32);
        }
        idx++;
    }
    return 0;               
}