#include <stdio.h>
int main(void) {
    int num1,num2;
    int inum1,inum2;
    int max;
    scanf("%d %d",&num1,&num2);
    inum1=(num1/100)+(num1%100-num1%10)+num1%10*100;
    inum2=(num2/100)+(num2%100-num2%10)+num2%10*100;
    max=inum1;
    if (inum2>inum1) max=inum2;
    printf("%d",max);
    return 0;
}