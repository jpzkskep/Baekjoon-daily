#include <stdio.h>
int main(void) {
    int alphabet[26];
    int ascii[26];
    char input[101];
    int len=0;
    int is_true[26];
    scanf("%s",input);
    for (int i=0; i<26; i++) {
        alphabet[i]=-1;
        ascii[i]=97+i;
        is_true[i]=1;
    }
    while (input[len]!='\0') len++;
    for (int i=0; i<len; i++) {
        for (int j=0; j<26; j++) {
            if (is_true[j]) {
                if (input[i]==ascii[j]) {
                    alphabet[j]=i;
                    is_true[j]=0;
                    break;
                }
            }
        }
    }
    for (int i=0; i<26; i++) {
        printf("%d ",alphabet[i]);
    }
    return 0;
}