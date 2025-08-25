#include <stdio.h>
int num[10001]={0};
int returning(int input);

int main(void) {
    for (int i=1; i<=10000; i++) {
        num[i]=returning(i);    //1이면 생성자 있음 0이면 생성자 없음
    }
    for (int i=1; i<=10000; i++) {
        if (num[i]==0) {
            printf("%d\n",i);
        }
    }
    return 0;
}

int returning(int input) {  
    int save_input=input;
    int add=0;
    int sum=input;
    while (input>=1) {
        add=input%10;
        sum+=add;
        input=(input-add)/10;
    }
    num[sum]=1;
    if (num[save_input]==1) return 1;
    return 0;
}