#include <stdio.h>
int main(void) {
    int n,len;
    char input[101];
    char alphabet[26]={0};
    int is_group;
    int count=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%s",input);
        len=0;
        for (int j=0; input[j]!='\0'; j++) {
            len++;
        }
        if (len==1) {
            count++;
            continue;
        }
        for (int j=0; j<26; j++) {
            alphabet[j]=0;
        }
        is_group=1;
        for (int j=0; j<len; j++) {
            if (alphabet[input[j]-97]>=0) {
                alphabet[input[j]-97]++;
            }
            if (alphabet[input[j]-97]>1 && input[j]!=input[j-1]) {
                is_group=0;
                break;
            }
            
        }
        if (is_group==1) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}