#include <stdio.h>
int main(void) {
    int input;
    int divide[100001];
    int idx,len,sum;
    int is_first;
    for(;;) {
        idx=0;
        len=0;
        sum=0;
        is_first=1;
        scanf("%d",&input);
        if (input==-1) break;
        for (int i=1; i<input; i++) {
            if (input%i==0) {
                divide[idx]=i;
                idx++;
                len++;
            }
        }
        for (int i=0; i<len; i++) {
            sum+=divide[i];
        }
        if (sum==input) {
            printf("%d = ",input);
            for (int i=0; i<idx; i++) {
                if (is_first) {
                    printf("%d ",divide[i]);
                    is_first=0;
                }
                else {
                    printf("+ %d ",divide[i]);
                }
            }
            printf("\n");
        }
        else if (sum!=input) {
            printf("%d is NOT perfect.\n",input);
        }
    }
    return 0;
}