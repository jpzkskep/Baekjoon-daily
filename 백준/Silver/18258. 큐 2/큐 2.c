#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    int stack[2000001];
    int front=0;
    int rear=-1;
    int num;
    char commend[15];
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%s",commend);
        if (strcmp(commend,"push")==0) {
            scanf("%d",&num);
            rear++;
            stack[rear]=num;
        }
        else if (strcmp(commend,"pop")==0) {
            if (front>rear) {
                printf("-1\n");
            }
            else {
                printf("%d\n",stack[front]);
                front++;
            }
        }
        else if (strcmp(commend,"size")==0) {
            printf("%d\n",rear-front+1);
        }
        else if (strcmp(commend,"empty")==0) {
            if (front>rear) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        else if (strcmp(commend,"front")==0) {
            if (front>rear) {
                printf("-1\n");
            }
            else {
                printf("%d\n",stack[front]);
            }
        }
        else if (strcmp(commend,"back")==0) {
            if (front>rear) {
                printf("-1\n");
            }
            else {
                printf("%d\n",stack[rear]);
            }
        }
    }
    return 0;
}