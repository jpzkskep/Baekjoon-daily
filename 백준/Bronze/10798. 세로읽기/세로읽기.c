#include <stdio.h>
int main(void) {
    char input[5][16]={0};
    for (int i=0; i<5; i++) {
        scanf("%s",input[i]);
    }
    for (int i=0; i<16; i++) {    //num[j][i]
        for (int j=0; j<5; j++) {
            if (input[j][i]=='\0') {
                continue;
            }
            else {
                printf("%c",input[j][i]);
            }
        }
    }
    return 0;
}