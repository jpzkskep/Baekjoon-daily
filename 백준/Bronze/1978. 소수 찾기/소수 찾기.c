#include <stdio.h>
int count=0;
void is_prime(int *number);
int main(void) {
    int input[101];
    int n;
    int repeat;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&input[i]);
        is_prime(&input[i]);
    }
    printf("%d",count);
    return 0;
}
void is_prime(int *number) {
    int repeat_count=0;
    if (*number==1) {
        count+=0;
        return;
    }
    if (*number==2) {
        count+=1;
        return;
    }
    for (int i=2; i<(*number); i++) {    // 입력받은 수 까지 반복
        if (*number%i!=0) {
            repeat_count++;
        }
        if (*number%i==0) {
            return;
        }
        if (*number%i!=0 && repeat_count==(*number)-2) {
            count++;
        }
    }
}