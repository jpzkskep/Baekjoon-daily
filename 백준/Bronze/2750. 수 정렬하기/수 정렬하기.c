#include <stdio.h>
int main(void) {
    int n;
    int input[1001];
    int temp;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&input[i]);
    }
    for (int i=0; i<n; i++) {    //i가 이전수 j가 나중수
        for (int j=0; j<n; j++) {
            if (input[i]<input[j]) {
                temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        printf("%d\n",input[i]);
    }
    return 0;
}