#include <stdio.h>

int GCD(int input1,int input2);

int main (void) {
    int num1x,num1y;
    int num2x,num2y;
    int max,min;
    int mul1,mul2;
    int added1,added2;
    int divide;
    scanf("%d %d",&num1x,&num1y);
    scanf("%d %d",&num2x,&num2y);
    max=GCD(num1y,num2y);
    min=num1y*num2y/max;
    mul1=min/num1y;
    mul2=min/num2y;
    added1=num1x*mul1;
    added2=num2x*mul2;
    int finalx=added1+added2;
    int finaly=min;
    divide=GCD(finalx,min);
    printf("%d %d",finalx/divide,finaly/divide);
    return 0;
}

int GCD(int input1,int input2) {
    int temp;
    while (input2!=0) {
        temp=input1%input2;
        input1=input2;
        input2=temp;
    }
    return input1;
}