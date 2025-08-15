#include <stdio.h>
int main(void) {
    int num[5];
    int average,sum=0;
    int temp;
    int middle;
    for (int i=0; i<5; i++) {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    average=sum/5;
    for (int i=0; i<5; i++) {    //수 정렬
        for (int j=i; j<5; j++) {
            if (num[j]<num[i]) {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    middle=num[2];
    printf("%d\n",average);
    printf("%d",middle);
    return 0;
}