#include <stdio.h>
int main(void) {
    int num1,num2,num3,sum;
    int count[10]={0};
    int number;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    sum=num1*num2*num3;
    while (sum>0) {
        number=sum%10;
        count[number]++;
        sum/=10;
    }
    for (int i=0; i<10; i++) {
        printf("%d\n",count[i]);
    }
    return 0;
}