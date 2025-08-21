#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    char functions[101];
    int stack[100001];    //스택
    int stack_where=-1;    //스택의 위치
    int push_num;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%s",functions);
        if (strcmp(functions,"push")==0) {
            scanf("%d",&push_num);
            stack_where++;
            stack[stack_where]=push_num;
        }
        else if (strcmp(functions,"pop")==0) {
            if (stack_where==-1) {
                printf("-1\n");
            }
            else {
                printf("%d\n",stack[stack_where]);
                stack_where--;
            }
        }
        else if (strcmp(functions,"size")==0) {
            printf("%d\n",stack_where+1);
        }
        else if (strcmp(functions,"empty")==0) {
            if (stack_where==-1) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        else if (strcmp(functions,"top")==0) {
            if (stack_where==-1) {
                printf("-1\n");
            }
            else {
                printf("%d\n",stack[stack_where]);
            }
        }
    }
    return 0;
}