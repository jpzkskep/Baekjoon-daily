#include <stdio.h>

long long GCD(long long input1,long long input2);

int main (void) {
    int n;
    long long num1,num2;
    long long max,min;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%lld %lld",&num1,&num2);
        max=GCD(num1,num2);
        min=num1*num2/max;
        printf("%lld\n",min);
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