#include <stdio.h>

int GCD(long long input1,long long input2);

int main (void) {
    long long num1,num2;
    long long min,max;
    scanf("%lld %lld",&num1,&num2);
    max=GCD(num1,num2);
    min=num1*num2/max;
    printf("%lld",min);
    return 0;
}

int GCD(long long input1,long long input2) {
    long long temp;
    while(input2!=0) {
        temp=input1%input2;
        input1=input2;
        input2=temp;
    }
    return input1;
}