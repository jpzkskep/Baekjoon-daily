#include <stdio.h>

int gcd(int num1,int num2);

int main(void) {
    int max,min;
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    max=gcd(num1,num2);
    min=num1*num2/max;
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}

int gcd(int num1,int num2) {
    int temp;
    while (num2!=0) {
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    return num1;
}