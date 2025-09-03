#include <stdio.h>

long long GCD(long long input1,long long input2);

int main(void) {
    long long num1,num2;
    long long count;
    scanf("%lld %lld",&num1,&num2);
    count=GCD(num1,num2);
    for (int i=0; i<count; i++) {
        printf("1");
    }
    return 0;
}

long long GCD(long long input1,long long input2) {
    long long temp;
    while (input2!=0) {
        temp=input1%input2;
        input1=input2;
        input2=temp;
    }
    return input1;
}