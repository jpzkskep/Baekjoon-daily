#include <stdio.h>

int main(void) {
    int input[6];
    for (int i=0; i<6; i++) {
        scanf("%d",&input[i]);
    }
    printf("%d %d %d %d %d %d",1-input[0],1-input[1],2-input[2],2-input[3],2-input[4],8-input[5]);
    return 0;
}