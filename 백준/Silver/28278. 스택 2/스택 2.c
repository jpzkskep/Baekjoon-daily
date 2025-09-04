#include <stdio.h>
int main(void) {
    int stack[1000001];
    int n;
    int point=-1;
    int commend;
    int input_num;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&commend);
        if (commend==1) {
            scanf("%d",&input_num);
            point++;
            stack[point]=input_num;
        }
        else if (commend==2) {
            if (point==-1) {
                printf("-1\n");
            }
            else {
                printf("%d\n",stack[point--]);
            }
        }
        else if (commend==3) {
            printf("%d\n",point+1);
        }
        else if (commend==4) {
            if (point==-1) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        else if (commend==5) {
            if (point==-1) {
                printf("-1\n");
            }
            else {
                printf("%d\n",stack[point]);
            }
        }
    }
    return 0;
}