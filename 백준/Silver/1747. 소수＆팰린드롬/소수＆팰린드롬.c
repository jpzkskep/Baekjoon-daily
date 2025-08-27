#include <stdio.h>
#include <string.h>

int main(void) {
    int num[1500001];
    int input;
    int len=0;
    char palnum[11]={0};
    int is_pal=1;
    int compare_num;
    
    //소수 판별
    for (int i=2; i<=1500000; i++) {
        num[i]=1;    //모두 소수라고 가정
    }
    num[1]=0;
    for (int i=2; i<=1500000; i++) {
        for (int j=2*i; j<=1500000; j+=i) {
            num[j]=0;    //num[j]=1이면 소수 num[j]=0이면 소수 아님
        }
    }
    
    scanf("%d", &input);
    
    //n판별
    for (int i=input; i<=1500000; i++) {
        if (num[i]==1) {
            palnum[11]=0;
            is_pal=1;
            len=0;
            compare_num=i;
            while (compare_num>=1) {
                palnum[len]=compare_num%10;
                compare_num/=10;
                len++;
            }
            for (int j=0; j<len/2; j++) {
                if (palnum[j]!=palnum[len-j-1]) {
                    is_pal=0;
                    break;
                }
            }
            if (is_pal) {
                printf("%d",i);
                return 0;
            }
        }
    }
    return 0;
}