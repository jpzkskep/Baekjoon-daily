#include <stdio.h>

int GCD(int num1,int num2);

int main(void) {
    int n;
    int num1,num2;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&num1,&num2);
        printf("%d\n",GCD(num1,num2));
    }
    return 0;
}

int GCD(int num1,int num2) {
    int temp;
    while (num2!=0) {
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    return num1;
}