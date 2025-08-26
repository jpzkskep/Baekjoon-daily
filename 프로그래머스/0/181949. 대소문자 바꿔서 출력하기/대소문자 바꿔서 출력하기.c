#include <stdio.h>
#include <string.h>

int main(void) {
    char input[21];
    int len;
    scanf("%s",input);
    len=strlen(input);
    for (int i=0; i<len; i++) {
        if (input[i]>=65 && input[i]<=90) {
            printf("%c",input[i]+32);
        }
        else if (input[i]>=97 && input[i]<=122) {
            printf("%c",input[i]-32);
        }
    }
    return 0;
}