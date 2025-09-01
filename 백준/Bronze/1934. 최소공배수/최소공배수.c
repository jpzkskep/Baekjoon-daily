#include <stdio.h>

int GCD(int num1,int num2);

int main(void) {
    int t,num1,num2;
    int max,min;
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        scanf("%d %d",&num1,&num2);
        max=GCD(num1,num2);
        min=num1*num2/max;
        printf("%d\n",min);
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