#include <stdio.h>
int main(void) {
    int num1,num2;
    int big,small;
    scanf("%d %d",&num1,&num2);
    while (num1!=num2) {
        if (num1>=num2) {
            big=num1;
            small=num2;
        }
        else {
            big=num2;
            small=num1;
        }
        num1=big-small;
        num2=small;
    }
    printf("%d",num1);
    return 0;
}