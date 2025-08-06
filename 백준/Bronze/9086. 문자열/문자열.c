#include <stdio.h>
int main(void) {
    int t;
    int first=0,end=0;
    int idx=0;
    char input[1001];
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%s",input);
        first=0;
        end=0;
        idx=0;
        while (input[idx]!='\0') {
            end++;
            idx++;
        }
        printf("%c",input[first]);
        printf("%c",input[end-1]);
        printf("\n");
    }
    return 0;
}