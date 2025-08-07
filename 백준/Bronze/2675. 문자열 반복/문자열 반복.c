#include <stdio.h>
int main(void) {
    int t,idx,len[1001];
    scanf("%d",&t);
    int test_num[1001];
    char input[21];
    for (int i=0; i<t; i++) {
        scanf("%d %s",&test_num[i],input);
        idx=0;
        while (input[idx]!='\0') {
            len[i]++;
            idx++;
        }
        for (int j=0; j<len[i]; j++) {    //abc 3  /htp 4등
            for (int k=0; k<test_num[i]; k++) {
                printf("%c",input[j]);
            }
        }
        printf("\n");
    }
    return 0;
}